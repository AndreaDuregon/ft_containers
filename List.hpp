/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiovo <sgiovo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/17 14:07:47 by sgiovo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IteratorList.hpp"
#include <iostream>

namespace ft
{
	template < class T > class list
	{
	private:
		ft::Node<T> *nBegin;
		ft::Node<T> *nEnd;
	public:
		typedef typename ft::listIterator<T> iterator;
		list(/* args */) {};
		~list() {};

		
		iterator begin (void)
		{
			return new listIterator<T>();
		}
	};
} 
