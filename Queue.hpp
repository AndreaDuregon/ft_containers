/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:43:09 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/23 20:06:15 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>

namespace ft
{
	template <class T, class Container = std::deque<T> > class queue
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

		queue(queue const &copy)
		{
			this->c = copy.c;
		}

		queue&					operator = (const queue& other)
		{
			this->c = other.c;
			return (*this);
		}

		virtual ~queue()	{}

		bool					empty() const
		{
			return (this->c.empty());
		}

		size_type				size() const
		{
			return (this->c.size());
		}

		value_type&				front()
		{
			return (this->c.front());
		}

		const value_type&		front() const
		{
			return (this->c.front());
		}

		value_type&				back()
		{
			return (this->c.back());
		}

		const value_type&		back() const
		{
			return (this->c.back());
		}

		void					push(const value_type& val)
		{
			this->c.push_back(val);
		}

		void					pop()
		{
			this->c.pop_front();
		}

		// NON MEMBER FUNCTION OVERLOAD

		template <class value_type, class container_type>
		friend bool operator == (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c == rhs.c);
		}
		
		template <class value_type, class container_type>
		friend bool operator != (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c != rhs.c);
		}

		template <class value_type, class container_type>
		friend bool operator <  (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c < rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator <= (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c <= rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator >  (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c > rhs.c);
		}
	
		template <class value_type, class container_type>
		friend bool operator >= (const ft::queue<value_type,container_type>& lhs, const ft::queue<value_type,container_type>& rhs)
		{
			return (lhs.c >= rhs.c);
		}
	};
}