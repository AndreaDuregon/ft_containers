/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:10:36 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 18:37:14 by dmalori          ###   ########.fr       */
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
		//ok
		explicit				stack(const container_type& ctnr = container_type()) : c(ctnr) {}
		//ok
		explicit stack(stack const &copy) : c(copy.c) {}
		//ok
		stack&					operator = (const stack& other)
		{
			this->c = other.c;
			return (*this);
		}
		//ok
		~stack() {}
		//ok
		bool					empty() const
		{
			return (this->c.empty());
		}
		//ok
		size_type				size() const
		{
			return (this->c.size());
		}
		///ok
		value_type&				top()
		{
			return (this->c.back());
		}
		
		const value_type&		top() const
		{
			return (this->c.back());
		}
		//ok
		void					push(const value_type& val)
		{
			this->c.push_back(val);
		}
		//ok
		void					pop()
		{
			this->c.pop_back();
		}

		// NON MEMBER FUNCTION OVERLOAD
		//ok
		template <class value_type, class container_type>
		friend bool operator == (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c == rhs.c);
		}
		//ok	
		template <class value_type, class container_type>
		friend bool operator != (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c != rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator <  (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c < rhs.c);
		}
		//ok	
		template <class value_type, class container_type>
		friend bool operator <= (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c <= rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator >  (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c > rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator >= (const ft::stack<value_type,container_type>& lhs, const ft::stack<value_type,container_type>& rhs)
		{
			return (lhs.c >= rhs.c);
		}
	};
}
