/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:40:22 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/31 12:53:08 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

namespace ft
{
	template <class T1, class T2> struct pair
	{
	public:
		typedef	T1	first_type;
		typedef	T2	second_type;
		typedef ft::pair<first_type, second_type> value_type;

		first_type	first;
		second_type	second;

		// MEMBER FUNCTIONS

		pair() : first(T1()), second(T2()) {}

		pair(const first_type& x, const second_type& y) : first(x), second(y) {}

		pair(const value_type& p) : first(p.first), second(p.second) {}

		pair &operator = (const pair& other)
		{
			this->first = other.first;
			this->second = other.second;
			return (*this);
		}

		// NON MEMBER FUNCTIONS

		value_type	make_pair(first_type t, second_type u)
		{
			return value_type(t, u);
		}

		friend bool operator == (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first == rhs.first);
		}

		friend bool operator != (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first != rhs.first);
		}

		friend bool operator < (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first < rhs.first);
		}

		friend bool operator <= (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first <= rhs.first);
		}

		friend bool operator > (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first > rhs.first);
		}

		friend bool operator >= (const value_type& lhs, const value_type& rhs)
		{
			return (lhs.first >= rhs.first);
		}
	};

	template <class T1, class T2>
	std::ostream& operator<<(std::ostream &output, const pair<T1, T2> &obj)
	{
		output << obj.first;
		return (output);
	}
}
