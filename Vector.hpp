/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:41:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/21 18:50:45 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IteratorVector.hpp"
#include <iostream>

namespace ft
{
	template < class T, class Allocator = std::allocator<T> > class vector
	{
	public:
		typedef	T												value_type;
		typedef	Allocator										allocator_type;
		typedef	std::size_t										size_type;
		typedef	std::ptrdiff_t									difference_type;
		typedef	value_type &									reference;
		typedef	value_type const &								const_reference;
		typedef	value_type *									pointer;
		typedef	value_type const *								const_pointer;
		typedef	typename ft::VectorIterator<T>					iterator;
		typedef	typename ft::constVectorIterator<T>				const_iterator;
		typedef	typename ft::reverseVectorIterator<T>			reverse_iterator;
		typedef	typename ft::constReverseVectorIterator<T>		const_reverse_iterator;

	private:
		pointer		vec;
		size_type	vec_capacity;
		size_type	vec_size;
		std::allocator<value_type>	alloc;

	public:

		// MEMBER FUNCTIONS
		
		vector()
		{
			this->vec = alloc.allocate(1);
			this->vec_capacity = 1;
			this->vec_size = 0;
		}

		vector(vector<T> const &copy)
		{
			this->vec = alloc.allocate(copy.vec_capacity);
			for (size_type i = 0; i < copy.vec_size; i++)
				this->vec[i] = copy.vec[i];
			this->vec_size = copy.vec_size;
			this->vec_capacity = copy.vec_capacity;
		}

		vector(size_type n)
		{
			this->vec = alloc.allocate(n);
			this->vec_capacity = n;
			this->vec_size = 0;
		}

		~vector()
		{
			alloc.deallocate(this->vec, this->vec_capacity); 
		}

		vector& operator = (const vector& x)
		{
			vector tmp(x);
			return &tmp;
		}
		// ITERATOR

		iterator 				begin()
		{
			return iterator(this->vec);
		}

		const_iterator			begin() const
		{
			return const_iterator(this->vec);
		}

		iterator				end()
		{
			return iterator(&this->vec[this->vec_size]);
		}
		
		const_iterator			end() const
		{
			return const_iterator(&this->vec[this->vec_size]);
		}

		reverse_iterator 		rbegin()
		{
			return iterator(&this->vec[this->vec_size - 1]);
			
		}

		const_reverse_iterator	rbegin() const
		{
			return const_iterator(&this->vec[this->vec_size - 1]);
		}

		reverse_iterator		rend()
		{
			return iterator(this->vec - 1);
		}
		
		const_reverse_iterator	rend() const
		{
			return const_iterator(this->vec - 1);
		}

		// CAPACITY
		
		size_type	size() const
		{
			return this->vec_size;
		}

		size_type	max_size() const
		{
			return (std::numeric_limits<value_type>::max());
		}

		void reserve (size_type n)
		{
			if (n > this->vec_capacity)
			{
				pointer		temp = alloc.allocate(n);
				for (int i = 0; i < this->vec_size; i++)
					temp[i] = this->vec[i];
				alloc.deallocate(this->vec, this->vec_capacity);
				this->vec = temp;
				this->vec_capacity = n;
			}
		}

		void		resize (size_type n, value_type val = value_type())
		{
			if (n < this->vec_size)
			{
				pointer tmp = alloc.allocate(n);
				for (int i = 0; i < n; i++)
					tmp[i] = this->vec[i];
				alloc.deallocate(this->vec, this->vec_capacity);
				this->vec = tmp;
				this->vec_capacity = n;
				this->vec_size = n;
			}
			else if (n > this->vec_capacity)
			{
				reserve(n);
			}
			if (n > this->vec_size)
			{
				if (val)
				{
					for (int i = this->vec_size; i < n; i++)
					{
						this->vec[i] = val;
					}
					this->vec_size = n;
				}
			}
		}

		size_type	capacity() const
		{
			return this->vec_capacity;
		}

		bool		empty() const
		{
			return (this->vec_size == 0);
		}

		// ELEMENT ACCESS

		reference operator[] (size_type n)
		{
			iterator it1 = this->vec;
			for (int i = 0; i != n; i++)
				it1++;
			return (*it1);
		}

		const_reference operator[] (size_type n) const
		{
			const_iterator it1;
			for (int i = 0; i != n; i++)
				it1++;
			return (it1.vec_p);
		}

		reference		at (size_type n)
		{
			return (this->vec[n]);
		}

		const_reference at (size_type n) const
		{
			return (this->vec[n]);
		}

		reference		front()
		{
			return *this->vec;
		}

		const_reference front() const
		{
			return *this->vec;
		}

		reference		back()
		{
			return 	this->vec[this->vec_size - 1];
		}

		const_reference back() const
		{
			return this->vec[this->vec_size - 1];
		}

		// MODIFIERS

		template <class InputIterator>
  		void		assign(InputIterator first, InputIterator last)
		{
			int i = 0;

			this->clear();
			while (first != last)
			{
				this->vec[i] = *first;
				first++;
				i++;
			}
		}

		void 		assign(size_type n, const value_type& val)
		{
			int i = 0;

			this->clear();
			while (i < n)
			{
				this->vec[i] = val;
				i++;
			}
		}
		
		void		push_back(const value_type& val)
		{
			if (this->vec_size == this->vec_capacity - 1)
				reserve(this->vec_capacity * 2);
			this->vec[this->vec_size] = val;
			this->vec_size++;
		}

		void 		pop_back()
		{
			this->size--;
		}

		iterator 	insert(iterator position, const value_type& val)
		{
			int pos = 0;
			iterator it1(this->begin());
			while (it1 != position)
			{
				it1++;
				pos++;
			}
			if (this->vec_capacity == this->vec_size)
			{
				this->reserve(this->vec_capacity * 2);
				position = this->begin();
				for (size_t i = 0; i < pos; i++)
					position++;
			}
			iterator it(this->end());
			int	i = this->vec_size;

			while (it != position)
			{
				this->vec[i] = this->vec[i - 1];
				it--;
				i--;
			}
			this->vec[i] = val;
			this->vec_size++;
			return it;
		}

    	void 		insert(iterator position, size_type n, const value_type& val)
		{
			for (size_t i = 0; i < n; i++)
				position = this->insert(position, val);
		}

		template <class InputIterator>
    	void 		insert(iterator position, InputIterator first, InputIterator last)
		{
			while (first != last--)
			{
				position = this->insert(position, *(last));
			}
		}

		void		clear()
		{
			alloc.deallocate(this->vec, this->vec_capacity);
			this->vec = alloc.allocate(1);
			this->vec_capacity = 1;
			this->vec_size = 0;
		}

	};
}