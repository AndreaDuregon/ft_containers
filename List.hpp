/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/17 16:04:31 by dmalori          ###   ########.fr       */
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
		/* MEMBER */
		typedef T								value_type;
		//typedef ???							allocator_type;
		typedef value_type&						reference;
		typedef const value_type&				const_reference;
		typedef	value_type*						pointer;
		typedef	const value_type*				const_pointer;
		typedef typename ft::listIterator<T>	iterator;
		typedef typename ft::listIterator<T>	const_iterator;
		typedef	typename ft::listIterator<T>	reverse_iterator;
		typedef	typename ft::listIterator<T>	const_reverse_iterator;
		typedef std::ptrdiff_t 					difference_type;
		typedef size_t							size_type;

		list(/* args */) {
			this->nBegin = new Node<T>();
			this->nEnd = new Node<T>();
			this->nBegin->next = this->nEnd;
			this->nBegin->prev = 0;
			this->nBegin->value = 0;
			this->nEnd->prev = this->nBegin;
			this->nEnd->next = 0;
			this->nEnd->value = 0;
		};
		~list() {};

		//iter section
		iterator begin()
		{
			return new iterator (this->nBegin);
		};
		
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;
		reverse_iterator rbegin();
		const_reverse_iterator rbegin() const;
		reverse_iterator rend();
		const_reverse_iterator rend() const;
		
		// Capacity
		bool empty() const;
		size_type size() const;
		size_type max_size() const;
		
		//Elem access
		reference front();
		const_reference front() const;
		reference back();
		const_reference back() const;
		
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
