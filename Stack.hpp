/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:10:36 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/23 14:10:06 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>

namespace ft
{
	template <class T, class Container = std::deque<int> > class stack
	{
	public:
		typedef	T				value_type;
		typedef	Container		container_type;
		typedef size_t			size_type;

	protected:
		container_type	c;

	public:

		// MEMBER FUNCTIONS
		
		explicit				stack(const container_type& ctnr = container_type())
		{
			this->c = ctnr;
		}

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

		template <class oT, class oC>
		friend bool operator == (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c == rhs.c);
		}
		
		template <class oT, class oC>
		friend bool operator != (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c != rhs.c);
		}

		template <class oT, class oC>
		friend bool operator <  (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c < rhs.c);
		}
	
		template <class oT, class oC>
		friend bool operator <= (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c <= rhs.c);
		}
	
		template <class oT, class oC>
		friend bool operator >  (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c > rhs.c);
		}
	
		template <class oT, class oC>
		friend bool operator >= (const ft::stack<oT,oC>& lhs, const ft::stack<oT,oC>& rhs)
		{
			return (lhs.c >= rhs.c);
		}
	};
}