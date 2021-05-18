/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:41:56 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/18 12:22:23 by aduregon         ###   ########.fr       */
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
		typedef	typename ft::vectorIterator<T>					iterator;
		typedef	typename ft::const_vectorIterator<T>			const_iterator;
		typedef	typename ft::reverse_vectorIterator<T>			reverse_iterator;
		typedef	typename ft::const_reverse_vectorIterator<T>	const_reverse_iterator;

	private:
		T			*vector;
		size_type	capacity;
		size_type	size;

	public:
		vector();
		~vector() {};
	};
}