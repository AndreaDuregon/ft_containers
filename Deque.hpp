/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 06:21:23 by dmalori           #+#    #+#             */
/*   Updated: 2021/06/04 12:44:53 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IteratorDeque.hpp"
#include "Vector.hpp"

namespace ft
{
	template <class T, class Alloc = std::allocator<T> > class deque
	{
	public:
		typedef	T												value_type;
		typedef Alloc											allocator_type;
		typedef	std::ptrdiff_t									difference_type;
		typedef	value_type &									reference;
		typedef	value_type const &								const_reference;
		typedef	value_type *									pointer;
		typedef	value_type const *								const_pointer;
		typedef size_t											size_type;
		typedef	typename ft::VectorIterator<T>					iterator;
		typedef	typename ft::constVectorIterator<T>				const_iterator;
		typedef	typename ft::reverseVectorIterator<T>			reverse_iterator;
		typedef	typename ft::constReverseVectorIterator<T>		const_reverse_iterator;

	private:
		pointer		vec;
		size_type	vec_capacity;
		size_type	vec_size;
		allocator_type	_alloc;

		void reserve (size_type n)
		{
			if (n > this->vec_capacity)
			{
				pointer		temp = _alloc.allocate(n);
				for (size_type i = 0; i < n; i++)
				{
					if (i < this->vec_size)	
						temp[i] = this->vec[i];
					else
						temp[i] = 0;
				}
				_alloc.deallocate(this->vec, this->vec_capacity);
				this->vec = temp;
				this->vec_capacity = n;
			}
		}

	protected:
		size_type	capacity() const
		{
			return this->vec_capacity;
		}

	public:
		// MEMBER FUNCTIONS
		//ok
		explicit deque(const allocator_type& _alloc = allocator_type())
		{
			this->_alloc = _alloc;
			this->vec = this->_alloc.allocate(0);
			this->vec_capacity = 0;
			this->vec_size = 0;
		}
		//ok
		explicit deque(size_type n, const value_type& val = value_type(), const allocator_type& _alloc = allocator_type())
		{
			this->_alloc = _alloc;
			this->vec = this->_alloc.allocate(n);
			this->vec_capacity = n;
			this->vec_size = n;
			for (size_t i = 0; i < n; i++)
				this->vec[i] = val;
		}
		//ok
		deque(deque const &copy)
		{
			this->_alloc = _alloc;
			this->vec = this->_alloc.allocate(0);
			this->vec_capacity = 0;
			this->vec_size = 0;
			*this = copy;
		}
		//ok
		deque (iterator first, iterator last, const allocator_type& _alloc = allocator_type())
		{
			this->_alloc = _alloc;
			this->vec = this->_alloc.allocate(0);
			this->vec_capacity = 0;
			this->vec_size = 0;
			this->insert(this->begin(), first, last);
		}
		//ok
		deque& operator = (const deque& x)
		{
			_alloc.deallocate(this->vec, this->vec_capacity);
			this->_alloc = x._alloc;
			this->vec = _alloc.allocate(x.vec_capacity);
			for (size_type i = 0; i < x.vec_size; i++)
				this->vec[i] = x.vec[i];
			this->vec_size = x.vec_size;
			this->vec_capacity = x.vec_capacity;
			return *this;
		}
		//ok
		~deque()
		{
			_alloc.deallocate(this->vec, this->vec_capacity); 
		}

		// ITERATOR
		//ok
		iterator 				begin()
		{
			return iterator(this->vec);
		}

		const_iterator			begin() const
		{
			return const_iterator(this->vec);
		}
		//ok
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
		//ok
		size_type	size() const
		{
			return this->vec_size;
		}
		//ok
		size_type	max_size() const
		{
			return (std::numeric_limits<size_type>::max() / sizeof(value_type));
		}
		//ok
		void		resize (size_type n, value_type val = value_type())
		{
			if (n < this->vec_size)
			{
				pointer tmp = _alloc.allocate(n);
				for (size_type i = 0; i < n; i++)
					tmp[i] = this->vec[i];
				_alloc.deallocate(this->vec, this->vec_capacity);
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
					for (size_type i = this->vec_size; i < n; i++)
					{
						this->vec[i] = val;
					}
					this->vec_size = n;
				}
				else
					this->vec_size = n;
			}
		}
		//ok
		bool		empty() const
		{
			return (this->vec_size == 0);
		}
		// ELEMENT ACCESS
		//ok
		reference operator[] (size_type n)
		{
			iterator it1 = this->vec;
			for (size_type i = 0; i != n; i++)
				it1++;
			return (*it1);
		}

		const_reference operator[] (size_type n) const
		{
			const_iterator it1;
			for (size_type i = 0; i != n; i++)
				it1++;
			return (it1.vec_p);
		}
		//ok
		reference		at (size_type n)
		{
			return (this->vec[n]);
		}

		const_reference at (size_type n) const
		{
			return (this->vec[n]);
		}
		//ok
		reference		front()
		{
			return *this->vec;
		}

		const_reference front() const
		{
			return *this->vec;
		}
		//ok
		reference		back()
		{
			return 	this->vec[this->vec_size - 1];
		}

		const_reference back() const
		{
			return this->vec[this->vec_size - 1];
		}
		// MODIFIERS
		//ok
  		void		assign(iterator first, iterator last)
		{
			int i = 0;
			this->clear();
			while (first != last)
			{
				this->push_back(*first);
				first++;
				i++;
			}
		}
		//ok
		void 		assign(size_type n, const value_type &val)
		{
			size_type i = 0;

			this->clear();
			while (i < n)
			{
				this->push_back(val);
				i++;
			}
		}
		//ok
		void		push_front(const value_type& val)
		{
			if (this->vec_capacity == 0)
				this->vec_capacity = 1;
			if (this->vec_size >= this->vec_capacity)
			{
				reserve(this->vec_capacity * 2);
			}
			ft::vector<T>	*tmp;
			tmp->push_back(val);
			tmp->insert(this->begin(), this->end());
			this->vec = tmp;
		}
		
		void		push_back(const value_type& val)
		{
			if (this->vec_capacity == 0)
				this->vec_capacity = 1;
			if (this->vec_size >= this->vec_capacity)
			{
				reserve(this->vec_capacity * 2);
			}
			this->vec[this->vec_size] = val;
			this->vec_size++;
		}

		void		pop_front()
		{
			ft::vector<T>	*tmp;
			iterator	it(this->begin);
			it++;
			tmp->insert(it, this->end());
			this->vec = tmp;
		}
		//ok
		void 		pop_back()
		{
			this->vec_size--;
		}
		//ok
		iterator 	insert(iterator position, const value_type& val)
		{
			size_type pos = 0;
			iterator it1(this->begin());
			while (it1 != position)
			{
				it1++;
				pos++;
			}
			if (this->vec_capacity == 0)
				this->vec_capacity = 1;
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
		//ok
    	void 		insert(iterator position, size_type n, const value_type& val)
		{
			size_type pos = 0;
			iterator it1(this->begin());
			iterator it(this->end());
			size_type	i = this->vec_size;
			for (size_t j = 0; j < n; j++)
			{
				pos = 0;
				it1 = this->begin();
				while (it1 != position)
				{
					it1++;
					pos++;
				}
				if (this->vec_capacity == 0)
					this->vec_capacity = 1;
				if (this->vec_capacity == this->vec_size)
				{
					this->reserve(this->vec_capacity + 1);
					position = this->begin();
					for (size_t i = 0; i < pos; i++)
						position++;
				}
				it = this->end();
				i = this->vec_size;
	
				while (it != position)
				{
					this->vec[i] = this->vec[i - 1];
					it--;
					i--;
				}
				this->vec[i] = val;
				this->vec_size++;
				position = it;
			}
		}
		//ok
    	void 		insert(iterator position, iterator first, iterator last)
		{
			int pos = 0;
			iterator it1(this->begin());
			iterator it(this->end());
			int	i = this->vec_size;
			while (first != last--)
			{
				pos = 0;
				it1 = this->begin();
				while (it1 != position)
				{
					it1++;
					pos++;
				}
				if (this->vec_capacity == 0)
					this->vec_capacity = 1;
				if (this->vec_capacity == this->vec_size)
				{
					this->reserve(this->vec_capacity + 1);
					position = this->begin();
					for (int i = 0; i < pos; i++)
						position++;
				}
				it = this->end();
				i = this->vec_size;
	
				while (it != position)
				{
					this->vec[i] = this->vec[i - 1];
					it--;
					i--;
				}
				this->vec[i] = *last;
				this->vec_size++;
				position = it;
			}
		}
		//ok
		iterator	erase(iterator position)
		{
			int			pos = 0;
			iterator	it = this->begin();

			while (it != position)
			{
				pos++;
				it++;
			}
			for (size_t i = pos; i < this->vec_size; i++)
				this->vec[i] = this->vec[i + 1];
			this->vec_size--;
			return (++position);
		}
		//ok
		iterator	erase(iterator first, iterator last)
		{	
			while (last-- != first)
			{
				this->erase(last);
			}
			return first;
		}
		//ok
		void		swap(deque& x)
		{
			T	*val;
			size_type size;
			size_type cap;
			val = this->vec;
			size = this->vec_size;
			cap = this->vec_capacity;
			this->vec = x.vec;
			this->vec_capacity = x.capacity();
			this->vec_size = x.size();
			x.vec = val;
			x.vec_capacity = cap;
			x.vec_size = size;
		}
		//ok		
		void		clear()
		{
			for (size_t i = 0; i < this->vec_size; i++)
				this->vec[i] = 0;
			this->vec_size = 0;
		}
		
		allocator_type get_allocator() const
		{
			return this->_alloc;
		}
		//NON MEMBER FUNCTIONS
		//ok
		template <class value_type, class Allocc>
		friend bool operator== (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			if (lhs.size() == rhs.size())
			{
				for (size_t i = 0; i < lhs.size(); i++)
				{
					if (*it1 != *it2)
						return false;
					it1++;
					it2++;
				}
				return true;
			}
			else
				return false;
		}
		//ok
		template <class value_type, class Allocc>
		friend bool operator!= (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			if (lhs.size() == rhs.size())
			{
				for (size_t i = 0; i < lhs.size(); i++)
				{
					if (*it1 != *it2)
						return true;
					it1++;
					it2++;
				}
				return false;
			}
			else
				return true;
		}
		//ok
		template <class value_type, class Allocc>
		friend bool operator<  (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			
			for (size_t i = 0; i < lhs.size(); i++)
			{
				if (*it1 != *it2)
				{
					if (*it1 < *it2)
						return true;
					else
						return false;
				}
				it1++;
				it2++;
			}
			return false;
		}
		//ok
		template <class value_type, class Allocc>
  		friend bool operator<= (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			
			for (size_t i = 0; i < lhs.size(); i++)
			{
				if (*it1 != *it2)
				{
					if (*it1 < *it2)
						return true;
					else
						return false;
				}
				it1++;
				it2++;
			}
			return true;
		}
		//ok
		template <class value_type, class Allocc>
  		friend bool operator>  (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			
			for (size_t i = 0; i < lhs.size(); i++)
			{
				if (*it1 != *it2)
				{
					if (*it1 > *it2)
						return true;
					else
						return false;
				}
				it1++;
				it2++;
			}
			return false;
		}
		//ok
		template <class value_type, class Allocc>
  		friend bool operator>= (const ft::deque<value_type,Allocc>& lhs, const ft::deque<value_type,Allocc>& rhs)
		{
			iterator it1(lhs.begin());
			iterator it2(rhs.begin());
			
			for (size_t i = 0; i < lhs.size(); i++)
			{
				if (*it1 != *it2)
				{
					if (*it1 > *it2)
						return true;
					else
						return false;
				}
				it1++;
				it2++;
			}
			return true;
		}
	};

	template <class T, class Alloc> void swap (ft::deque<T,Alloc>& x, ft::deque<T,Alloc>& y)
	{
		x.swap(y);
	}
}

