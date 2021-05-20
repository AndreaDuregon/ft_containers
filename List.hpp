/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/20 14:59:10 by dmalori          ###   ########.fr       */
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
		ft::Node<T>		*_end;
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

		//ok
		list(/* args */) {
			this->_end = new Node<T>();
			this->_end->value = 0;
			this->_end->next = this->_end;
			this->_end->prev = this->_end;
			this->_size = 0;
		};
		//ok
		list(size_type n, const_reference val=value_type()) {
			this->_end = new Node<T>();
			this->_end->value = 0;
			this->_end->next = this->_end;
			this->_end->prev = this->_end;
			this->_size = 0;
			for (size_type i = 0; i < n; i++)
				this->push_back(val);
		};
		//ok
		list(iterator first, iterator last){
			this->_end = new Node<T>();
			this->_end->value = 0;
			this->_end->next = this->_end;
			this->_end->prev = this->_end;
			this->_size = 0;
			for (; first != last; ++first)
				this->push_back(*first);
		};
		//ok
		virtual ~list() {
			this->clear();
			delete this->_end;
		};

		//ok
		iterator begin()
		{
			return iterator (this->_end->next);
		};
		
		const_iterator begin() const
		{
			return const_iterator(this->_end->next);
		};
		//ok
		iterator end()
		{
			return iterator(this->_end);
		};
		
		const_iterator end() const
		{
			return const_iterator(this->_end);
			
		};
		
		reverse_iterator rbegin()
		{
			return reverse_iterator(this->_end->next);
		}

		const_reverse_iterator rbegin() const
		{
			return const_reverse_iterator(this->_end->next);
		}

		reverse_iterator rend()
		{
			return reverse_iterator(this->_end);	
		}

		const_reverse_iterator rend() const
		{
			return const_reverse_iterator(this->_end);	
		}
		
		//ok
		bool empty() const
		{
			if (this->_size == 0)
				return true;
			return false;
		}
		//ok
		size_type size() const
		{
			return this->_size;
		};
		//ok
		size_type max_size() const
		{
			return std::numeric_limits<size_type>::max() / (sizeof(Node<T>));	
		};
		//ok
		reference front()
		{
			return this->_end->next->value;
		};
		
		const_reference front() const
		{
			return this->_end->next->value;

		};
		//ok
		reference back()
		{
			return this->_end->prev->value;	
		};

		const_reference back() const
		{
			return this->_end->prev->value;
		};
		
		//ok
  		void assign (iterator first, iterator last)
		{
			//clear the list
			while(first != last)
			{
				this->push_back(first._curr->value);
				first++;
			}
		}
		//ok
		void assign (size_type n, const value_type& val)
		{
			//clear the list
			for (size_t i = 0; i < n; i++)
			{
				this->push_back(val);
			}	
		}
		//ok
		void push_front (const value_type& val)
		{
			Node<T> *node = new Node<T>(val);
			node->prev = this->_end;
			node->next = this->_end->next;
			this->_end->next->prev = node;
			this->_end->next = node;
			this->_size++;
		}
		//ok
		void pop_front()
		{
			if (this->_size > 0)
			{
				Node<T> *del = this->_end->next;
				this->_end->next->next->prev = this->_end;
				this->_end->next = this->_end->next->next;
				delete del;
				this->_size--;
			}
		}
		//ok
		void push_back (const value_type& val)
		{
			Node<T> *node = new Node<T>(val);
			node->next = this->_end;
			node->prev = this->_end->prev;
			this->_end->prev->next = node;
			this->_end->prev = node;
			this->_size++;
		}
		//ok
		void pop_back()
		{
			if (this->_size > 0)
			{
				Node<T> *del = this->_end->prev;
				this->_end->prev->prev->next = this->_end;
				this->_end->prev = this->_end->prev->prev;
				delete del;
				this->_size--;
			}
		}
		//ok
		iterator insert (iterator position, const value_type& val)
		{
		
			Node<T> *node  = new Node<T>(val);
			iterator prev(position._curr);

			//prev._curr->prev->next = node;
			prev.operator--();
			prev._curr->next = node;
			node->prev = prev._curr;
			position._curr->prev = node;
			node->next = position._curr;
			prev.operator++();
			this->_size++;
			return prev;
		}

	   	void insert (iterator position, size_type n, const value_type& val)
		{
			for (size_type i = 0; i < n; i++)
				this->insert(position, val);
		}

		void insert (iterator position, iterator first, iterator last)
		{	
			iterator workingIter(first._curr);
			while(workingIter._curr != last._curr)
			{
				this->insert(position, workingIter._curr->value);
				workingIter.operator++();
			}
		}
		
		iterator erase (iterator position)
		{
			position._curr->prev->next = position._curr->next;
			position._curr->next->prev = position._curr->prev;
			delete position._curr;
		}

		iterator erase (iterator first, iterator last)
		{
			return 0;
		}
		
		void swap (list& x)
		{
			
		}

		void resize (size_type n, value_type val = value_type())
		{
			
		}

		void clear()
		{
			while(this->begin() != this->end())
			{
				this->pop_back();
			}
			this->_size = 0;
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
			/* iterator iter(this->begin());
			while(iter != this.end())
			{
				if(iter._curr->value == iter._curr->next->value)
				{
					this.
				}
			} */
				
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
