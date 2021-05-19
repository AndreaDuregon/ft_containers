/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:41:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/19 20:07:07 by aduregon         ###   ########.fr       */
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
		vector()
		{
			this->vec = alloc.allocate(1);
			this->vec_capacity = 1;
			this->vec_size = 0;
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
				for (int i = 0; i < this->size; i++)
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
				for (int i = n; i < this->vec_size; i++)
				{
					delete (this->vec[i]);
					this->size--;
				}
			}
			else if (n > this->vec_capacity)
			{
				reserve(n);
			}
			if (n > this->vec_size)
			{

			}
		}

	};
}