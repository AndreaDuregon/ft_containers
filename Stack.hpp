/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:10:36 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 14:29:37 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "List.hpp"

namespace ft
{
	template <class T, class Container = ft::list<T> > class stack
	{
	public:
		typedef	Container			container_type;
		typedef	T					value_type;
		typedef size_t				size_type;
		typedef value_type&			container_reference;
		typedef const value_type&	const_reference;

	protected:
		container_type	c;

	public:

		// MEMBER FUNCTIONS
		
		explicit				stack(const container_type& ctnr = container_type())
		{
			this->c = ctnr;
		}

		stack(stack const &copy)
		{
			this->c = copy.c;
		}

		stack&					operator = (const stack& other)
		{
			this->c = other.c;
			return (*this);
		}

		virtual ~stack()	{}

		bool					empty() const
		{
			return (this->c.empty());
		}

		size_type				size() const
		{
			return (this->c.size());
		}

		value_type&				top()
		{
			return (this->c.back());
		}
		
		const value_type&		top() const
		{
			return (this->c.back());
		}

		void					push(const value_type& val)
		{
			this->c.push_back(val);
		}

		void					pop()
		{
			this->c.pop_back();
		}

		// NON MEMBER FUNCTION OVERLOAD

		template <class value_type, class container_type>
		friend bool operator == (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c == rhs.c);
		}
		
		template <class value_type, class container_type>
		friend bool operator != (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c != rhs.c);
		}

		template <class value_type, class container_type>
		friend bool operator <  (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c < rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator <= (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c <= rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator >  (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c > rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator >= (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c >= rhs.c);
		}
	};
}