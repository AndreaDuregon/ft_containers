/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Less.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:04:49 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/01 14:13:36 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

namespace ft
{
	template <class T> struct less
	{
	public:
		typedef	bool	result_type;
		typedef	T		first_argument_type;
		typedef	T		second_argument_type;

		// MEMBER FUNCTIONS
		less()	{}

		less(less const & copy)
		{
			*this = copy;
		}


		bool	operator () (const T& lhs, const T& rhs) const
		{
			return lhs < rhs;
		}
	};
}
