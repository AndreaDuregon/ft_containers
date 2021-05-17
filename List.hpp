/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/17 18:16:39 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IteratorList.hpp"
#include <iostream>

namespace ft
{
	template < class T, class Allocator = std::allocator<T> > class list
	{
	private:
		ft::Node<T>		*_Begin;
		ft::Node<T>		*_End;
		unsigned int	_size;
	public:
		/* MEMBER */
		typedef T								value_type;
		typedef Allocator						allocator_type;
		typedef value_type&						reference;
		typedef const value_type&				const_reference;
		typedef	value_type*						pointer;
		typedef	const value_type*				const_pointer;
		typedef typename ft::listIterator<T>	iterator;
		typedef typename ft::clistIterator<T>	const_iterator;
		typedef	typename ft::rlistIterator<T>	reverse_iterator;
		typedef	typename ft::rclistIterator<T>	const_reverse_iterator;
		typedef std::ptrdiff_t 					difference_type;
		typedef size_t							size_type;

		list(/* args */) {
			this->_Begin = new Node<T>();
			this->_End = new Node<T>();
			this->_Begin->next = this->_End;
			this->_Begin->prev = 0;
			this->_Begin->value = 0;
			this->_End->prev = this->_Begin;
			this->_End->next = 0;
			this->_End->value = 0;
			this->_size = 0;
		};
		~list() {};

		//iter section
		iterator begin()
		{
			return iterator (this->_Begin);
		};
		
		const_iterator begin() const
		{
			return iterator(this->_Begin);
		};
		
		iterator end()
		{
			return iterator(this->_End);
		};
		
		const_iterator end() const
		{
			return iterator(this->_End);
			
		};
		
		reverse_iterator rbegin()
		{
			return reverse_iterator(this->_Begin);
		}

		const_reverse_iterator rbegin() const
		{
			return const_reverse_iterator(this->_Begin);
		}

		reverse_iterator rend()
		{
			return reverse_iterator(this->_End);	
		}

		const_reverse_iterator rend() const
		{
			return const_reverse_iterator(this->_End);	
		}
		
		// Capacity
		bool empty() const
		{
			if (this->_size == 0)
				return true;
			return false;
		}
		size_type size() const
		{
			if (this->_size == 0)
				return true;
			return false;
		};
		// SYS richiesta per sapere max value allocabile
		size_type max_size() const
		{
			return 0;	
		};
		
		//Elem access
		reference front()
		{
			return &this->_Begin->value;
		};
		
		const_reference front() const
		{
			return &this->_Begin->value;

		};
		
		reference back()
		{
			return &this->_End->prev->value;	
		};

		
		const_reference back() const
		{
			return &this->_End->prev->value;
		};
		
		// Modifiers
  		void assign (iterator first, iterator last);							//range
		
		void assign (size_type n, const value_type& val);								//fill
		void push_front (const value_type& val);
		void pop_front();
		void push_back (const value_type& val);
		
		void pop_back();

		iterator insert (iterator position, const value_type& val);
	   	void insert (iterator position, size_type n, const value_type& val);
		
		template <class InputIterator>
		void insert (iterator position, InputIterator first, InputIterator last);
		
		template <class InputIterator>
		iterator erase (iterator position);
		template <class InputIterator>
		iterator erase (iterator first, iterator last);
		
		void swap (list& x);
		void resize (size_type n, value_type val = value_type());
		void clear();

		//operations
		void splice (iterator position, list& x);										//entire list (1)	
		void splice (iterator position, list& x, iterator i);							//single element (2)	
		void splice (iterator position, list& x, iterator first, iterator last);		//element range (3)	
		
		void remove (const value_type& val);
		template <class Predicate>
		void remove_if (Predicate pred);
		
		void unique();
		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred);

  		void merge (list& x);
		template <class Compare>
  		void merge (list& x, Compare comp);

  		void sort();

		template <class Compare>
		void sort (Compare comp);
		void reverse();

	};
} 
