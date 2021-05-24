/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:35:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 10:18:55 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Pair.hpp"
#include "Less.hpp"
#include "IteratorMap.hpp"

namespace ft
{
	template <class Key, class T, class Compare = ft::less<Key>, class Allocator = std::allocator<ft::pair<const Key, T> > > class map
	{
		typedef Key										key_type;
		typedef T										mapped_type;
		typedef ft::pair<const Key, T>					value_type;
		typedef std::size_t								size_type;
		typedef std::ptrdiff_t							difference_type;
		typedef Compare									key_compare;
		typedef Allocator								allocator_type;
		typedef Allocator::reference					reference;
		typedef Allocator::const_reference				const_reference;
		typedef Allocator::pointer						pointer;
		typedef Allocator::const_pointer				const_pointer;
		typedef typename ft::mapIterator<T>				iterator;
		typedef typename ft::constMapIterator<T>		const_iterator;
		typedef typename ft::reverseMapIterator<T>		reverse_iterator;
		typedef typename ft::constReverseMapIterator<T>	const_reverse_iterator;
	};
}