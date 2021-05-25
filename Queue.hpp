/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:43:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 14:32:29 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "List.hpp"

namespace ft
{
	template <class T, class Container = ft::list<T> > class queue
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

		explicit queue(const container_type& ctnr = container_type())
		{
			this->c = ctnr;
		}
		//ok
		queue(queue const &copy)
		{
			this->c = copy.c;
		}
		//ok
		queue&					operator = (const queue& other)
		{
			this->c = other.c;
			return (*this);
		}
		//ok
		virtual ~queue()	{}
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
		//ok
		value_type&				front()
		{
			return (this->c.front());
		}

		const value_type&		front() const
		{
			return (this->c.front());
		}
		//ok
		value_type&				back()
		{
			return (this->c.back());
		}

		const value_type&		back() const
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
			this->c.pop_front();
		}

		// NON MEMBER FUNCTION OVERLOAD
		//ok
		template <class value_type, class container_type>
		friend bool operator == (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c == rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator != (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c != rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator <  (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c < rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator <= (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c <= rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator >  (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c > rhs.c);
		}
		//ok
		template <class value_type, class container_type>
		friend bool operator >= (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c >= rhs.c);
		}
	};
}
