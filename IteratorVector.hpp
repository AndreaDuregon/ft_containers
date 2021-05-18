/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:43:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/18 11:54:45 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Node.hpp"

namespace ft
{
	template <class T> class VectorIterator
	{
		typedef T				value_type;
		typedef std::ptrdiff_t 	difference_type;
		typedef value_type *	pointer;
		typedef value_type &	reference;

	};
}	