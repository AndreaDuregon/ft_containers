/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/17 18:35:53 by forsili          ###   ########.fr       */
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
  		void assign (iterator first, iterator last);
		
		void assign (size_type n, const value_type& val);
		
		void push_front (const value_type& val)
		{
			iterator begin(this->begin());

			this->insert(begin, val);
		}

		void pop_front()
		{
			iterator it(this->begin());

			erase(it);
		}

		void push_back (const value_type& val)
		{
			iterator end(this->end());

			this->insert(end, val);
		}
		
		void pop_back()
		{
			iterator it(this->end());

			this->erase();
		}

		iterator insert (iterator position, const value_type& val)
		{
			ft::Node<T> node;
			iterator it_next;

			it_next = position;
			it_next++;
			node = new Node<T>(val);
			*position.curr->next = &node;
			node.prev = &(*position);
			node.next = &(*it_next);
			this->size++;
		}

	   	void insert (iterator position, size_type n, const value_type& val)
		{
			size_type	i;
			ft::Node<T> node;

			i = 0;
			while (i < n)
			{
				insert(position, val);
				i++;
				position++;
			}
		}
		
		template <class InputIterator>
		void insert (iterator position, InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				
				position++;
				first++;
			}
			
		}
		
		template <class InputIterator>
		iterator erase (iterator position)
		{
			iterator it_prev;
			iterator it_next;

			it_prev = position;
			it_next = position;
			it_prev--;
			it_next--;
			delete(*position);
			*it_prev.curr->next = *it_next;
			*it_next.curr->prev = *it_prev;
			this->size--;
		}

		template <class InputIterator>
		iterator erase (iterator first, iterator last)
		{
			while (first != last)
			{
				this->erase(first);
				first++;
			}
		}
		
		void swap (list& x)
		{
			ft::list<T> tmp;

			tmp = *this;
			*this = x;
			x = tmp;
		}

		void resize (size_type n, value_type val = value_type())
		{
			ft::list<T> tmp(*this);
			iterator it_tmp(tmp.begin());

			this->clear();
			for (size_t i = 0; i < n; i++)
			{
				if (i > this->size())
					this->push_back(val);
				else
				{
					this->push_back(*it_tmp.curr->value);
					it_tmp++;
				}
			}
		}

		void clear()
		{
			iterator it(this->begin());

			for (size_t i = 0; i < this->size(); i++)
			{
				this->erase(it);
				it++;
			}	
		}

		//operations
		void splice (iterator position, list& x)
		{
			this->insert(position, x.begin(), x.end());
		}
	
		void splice (iterator position, list& x, iterator i)
		{
			this->insert(position, i, x.end());
		}

		void splice (iterator position, list& x, iterator first, iterator last)
		{
			this->insert(position, first, last);
		}
		
		void remove (const value_type& val)
		{
			iterator it(this->begin());
			
			for (size_t i = 0; i < this->size(); i++)
			{
				if (*it.curr->value == val)
					this->erase(it);
				it++;
			}
		}

		template <class Predicate>
		void remove_if (Predicate pred)
		{
			iterator it(this->begin());
			
			for (size_t i = 0; i < this->size(); i++)
			{
				if (pred(*it))
					this->erase(it);
				it++;
			}
			
		}
		
		void unique()
		{
			iterator it_this(this->begin());
			iterator it_x(this->begin());

			it_x++;
			for (size_t k = 0; k < this->size(); k++)
			{
				if (*it_x == *it_this)
					this->erase(it_x);
				it_this++;
				it_x++;
			}
		}

		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred)
		{
			iterator it_this(this->begin());
			iterator it_x(this->begin());

			it_x++;
			for (size_t k = 0; k < this->size(); k++)
			{
				if (binary_pred(*it_x, *it_this))
					this->erase(it_x);
				it_this++;
				it_x++;
			}
		}

  		void merge (list& x)
		{
			iterator it_this(this->begin());
			iterator it_x(x.begin());

			for (size_t i = 0; i < x.size(); i++)
			{
				for (size_t k = 0; k < this->size(); k++)
				{
					if (!(*it_x < *it_this))
					{
						this->insert(it_this, 1, *it_x.curr->value);
						this->erase(it_x);
					}
					it_this++;
				}
				it_x++;
			}
		}

		template <class Compare>
  		void merge (list& x, Compare comp)
		{
			iterator it_this(this->begin());
			iterator it_x(x.begin());

			for (size_t i = 0; i < x.size(); i++)
			{
				for (size_t k = 0; k < this->size(); k++)
				{
					if (comp(*it_x, *it_this))
					{
						it_this++;
						this->insert(it_this, 1, *it_x.curr->value);
						this->erase(it_x);
						it_this--;
					}
					it_this++;
				}
				it_x++;
			}
			
		}

  		void sort()
		{
			iterator	it_i(this->begin());
			iterator	it_k(this->begin());
			T			tmp;

			for (size_t i = 0; i < this->size; i++)
			{
				for (size_t k = i; k < this->size; i++)
				{
					if (*it_i < *it_k)
					{
						tmp = *it_i.curr;
						*it_i = *it_k;
						*it_k = tmp;
					}
					it_k++;
				}
				it_i++;
			}
			
		}

		template <class Compare>
		void sort (Compare comp)
		{
			iterator	it_i(this->begin());
			iterator	it_k(this->begin());
			T			tmp;

			for (size_t i = 0; i < this->size; i++)
			{
				for (size_t k = i; k < this->size; i++)
				{
					if (comp(*it_i, *it_k))
					{
						tmp = *it_i.curr;
						*it_i = *it_k;
						*it_k = tmp;
					}
					it_k++;
				}
				it_i++;
			}
			
		}

		void reverse()
		{
			iterator it_end(this->end());
			iterator it_begin(this->begin());
			ft::list<T> tmp;
			iterator tmp_end(tmp->end());
			iterator tmp_begin(tmp->begin());

			for (size_t i = 0; i < this->size(); i++)
			{
				tmp.push_back(*it_end);
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
