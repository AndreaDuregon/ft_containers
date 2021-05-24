/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:40:22 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 09:53:16 by aduregon         ###   ########.fr       */
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
	
	protected:
		first_type	first;
		second_type	second;

	public:

		// MEMBER FUNCTIONS

		pair()
		{
			this->first = 0;
			this->second = 0;
		}

		pair(const T1& x, const T2& y)
		{
			this->first = x;
			this->second = y;
		}

		template< class U1, class U2 >
		pair(const pair<U1, U2>& p)
		{
			this->first = p.first;
			this->second = p.second;
		}

		pair 					&operator = (const pair& other)
		{
			this->first = other.first;
			this->second = other.second;
			return (*this);
		}

		// NON MEMBER FUNCTIONS

		template< class T1, class T2 >
		friend ft::pair<T1,T2>	make_pair(T1 t, T2 u)
		{
			return ft::pair(t, u);
		}

		template< class T1, class T2 >
		friend bool operator == (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second == rhs.second);
		}

		template< class T1, class T2 >
		friend bool operator != (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second != rhs.second);
		}

		template< class T1, class T2 >
		friend bool operator < (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second < rhs.second);
		}

		template< class T1, class T2 >
		friend bool operator <= (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second <= rhs.second);
		}

		template< class T1, class T2 >
		friend bool operator > (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second > rhs.second);
		}

		template< class T1, class T2 >
		friend bool operator >= (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
		{
			return (lhs.second >= rhs.second);
		}
	};
}