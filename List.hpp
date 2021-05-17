/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/17 16:28:04 by forsili          ###   ########.fr       */
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
		typedef typename ft::listIterator<T> iterator;
		list(/* args */) {};
		~list() {};

		//iter section
		iterator begin();
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
		template <class listIterator>
  		void assign (InputIterator first, InputIterator last);							//range
		
		void assign (size_type n, const value_type& val);								//fill
		void push_front (const value_type& val);
		void pop_front();
		void push_back (const value_type& val);
		void pop_back();

		template <class listIterator>
		listIterator insert (iterator position, const value_type& val);
	   	void insert (iterator position, size_type n, const value_type& val);
		
		template <class InputIterator>
    	void insert (iterator position, InputIterator first, InputIterator last);
		
		template <class InputIterator>
		Listiterator erase (iterator position);
		template <class InputIterator>
		Listiterator erase (iterator first, iterator last);
		
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
  		void merge (list& x, Compare comp)
		{
			ft::list<T> tmp(*this);

			for (size_t i = 0; i < count; i++)
			{
				/* code */
			}
			
		}

  		void sort(); // DA FINIRE

		template <class Compare>
		void sort (Compare comp) //DA FINIRE
		{}

		void reverse()
		{
			iterator it_end(this->end());
			iterator it_begin(this->begin());
			ft::list<T> tmp;
			iterator tmp_end(tmp->end());
			iterator tmp_begin(tmp->begin());

			for (size_t i = 0; i < this->size(); i++)
			{
				tmp.push_back(*it);
				it_end--;
			}
			for (size_t i = 0; i < this->size(); i++)
			{
				*it_begin = *tmp_begin;
				it_begin++;
				tmp_begin++;
			}
		}

	};
} 
