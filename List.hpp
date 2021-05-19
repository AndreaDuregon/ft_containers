/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/19 15:09:32 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IteratorList.hpp"
#include <iostream>
#include <unistd.h>
#include <limits>

namespace ft
{
	template < class T, class Allocator = std::allocator<T> > class list
	{
	private:
		ft::Node<T>		*_Begin;
		ft::Node<T>		*_End;
		size_t			_size;
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
			this->_End = new Node<T>();
			this->_Begin = this->_End;
			this->_End->value = 0;
			this->_End->next = this->_Begin;
			this->_End->prev = this->_Begin;
			this->_size = 0;
		};
		list(size_type n, const_reference val=value_type()) {
			this->_End = new Node<T>();
			this->_Begin = this->_End;
			this->_End->value = 0;
			this->_End->next = this->_Begin;
			this->_End->prev = this->_Begin;
			this->_size = 0;
			for (size_type i = 0; i < n; i++)
				this->push_back(val);
		};
		list(iterator first, iterator last){
			this->_End = new Node<T>();
			this->_Begin = this->_End;
			this->_End->value = 0;
			this->_End->next = this->_Begin;
			this->_End->prev = this->_Begin;
			this->_size = 0;
			for (; first != last; first++)
				this->push_back(*first);
		};
		~list() {};

		//iter section
		iterator begin()
		{
			return iterator (this->_Begin->next);
		};
		
		const_iterator cbegin() const
		{
			return const_iterator(this->_Begin->next);
		};
		
		iterator end()
		{
			return iterator(this->_End);
		};
		
		const_iterator cend() const
		{
			return const_iterator(this->_End);
			
		};
		
		reverse_iterator rbegin()
		{
			return reverse_iterator(this->_Begin->next);
		}

		const_reverse_iterator crbegin() const
		{
			return const_reverse_iterator(this->_Begin->next);
		}

		reverse_iterator rend()
		{
			return reverse_iterator(this->_End);	
		}

		const_reverse_iterator crend() const
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
			return this->_size;
		};
		// SYS richiesta per sapere max value allocabile
		size_type max_size() const
		{
			return std::numeric_limits<size_type>::max() / (sizeof(Node<T>));	
		};
		
		//Elem access
		reference front()
		{
			return this->_Begin->next->value;
		};
		
		const_reference front() const
		{
			return this->_Begin->next->value;

		};
		
		reference back()
		{
			return this->_End->prev->value;	
		};

		const_reference back() const
		{
			return this->_End->prev->value;
		};
		
		// Modifiers
  		void assign (iterator first, iterator last)
		{
			//clear the list
			while(first != last)
			{
				this->push_back(first._curr->value);
				first++;
			}
		}
		
		void assign (size_type n, const value_type& val)
		{
			//clear the list
			for (size_t i = 0; i < n; i++)
			{
				this->push_back(val);
			}
			
		}
		
		void push_front (const value_type& val)
		{
			Node<T> *node = new Node<T>(val);
			node->prev = this->_Begin;
			node->next = this->_Begin->next;
			this->_Begin->next->prev = node;
			this->_Begin->next = node;
			this->_size++;
		}

		void pop_front()
		{
			if (this->_size > 0)
			{
				Node<T> *del = this->_Begin->next;
				this->_Begin->next->next->prev = this->_Begin;
				this->_Begin->next = this->_Begin->next->next;
				delete del;
				this->_size--;
			}
		}

		void push_back (const value_type& val)
		{
			Node<T> *node = new Node<T>(val);
			node->next = this->_End;
			node->prev = this->_End->prev;
			this->_End->prev->next = node;
			this->_End->prev = node;
			this->_size++;
		}
		
		void pop_back()
		{
			if (this->_size > 0)
			{
				Node<T> *del = this->_End->prev;
				del->prev->next = this->_End;
				this->_End->prev = del->prev;
				this->_size--;
			}
		}

		iterator insert (iterator position, const value_type& val)
		{
			
			Node<T> *node  = new Node<T>(val);
			iterator prev(position);

			prev--;
			prev._curr->next = node;
			node->prev = prev._curr;
			position._curr->prev = node;
			node->next = position._curr;
			prev++;
			return prev;
			/*
			ft::Node<T> *node;
			iterator it_next;

			it_next = position;
			it_next++;
			node = new Node<T>(val);
			*position._curr->next = &node;
			node->prev = &(*position);
			node->next = &(*it_next);
			this->size++;
			*/
		}

	   	void insert (iterator position, size_type n, const value_type& val)
		{
			
		}
		
		template <class InputIterator>
		void insert (iterator position, InputIterator first, InputIterator last)
		{
			
		}
		
		template <class InputIterator>
		iterator erase (iterator position)
		{
			
		}

		template <class InputIterator>
		iterator erase (iterator first, iterator last)
		{
		
		}
		
		void swap (list& x)
		{
			
		}

		void resize (size_type n, value_type val = value_type())
		{
			
		}

		void clear()
		{
			
		}

		//operations
		void splice (iterator position, list& x)
		{
			
		}
	
		void splice (iterator position, list& x, iterator i)
		{
			
		}

		void splice (iterator position, list& x, iterator first, iterator last)
		{
			
		}
		
		void remove (const value_type& val)
		{
			
		}

		template <class Predicate>
		void remove_if (Predicate pred)
		{
			
		}
		
		void unique()
		{
			
		}

		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred)
		{
			
		}

  		void merge (list& x)
		{
			
		}

		template <class Compare>
  		void merge (list& x, Compare comp)
		{
			
			
		}

  		void sort()
		{
			
			
		}

		template <class Compare>
		void sort (Compare comp)
		{
			
		}

		void reverse()
		{
			
		}

		void	print()
		{
			iterator it(this->begin());
			//nullterminato? nexfriks c entra qualcosa?
			while (it._curr->next)
			{
				std::cout << it._curr->value << std::endl;
				it++;
			}
			//sleep(10);
		}

	};
} 
