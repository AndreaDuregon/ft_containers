/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/21 18:56:15 by dmalori          ###   ########.fr       */
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
			this->clear();
			while(first != last)
			{
				this->push_back(first._curr->value);
				first++;
			}
		}
		//ok
		void assign (size_type n, const value_type& val)
		{
			this->clear();
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
		//ok
	   	void insert (iterator position, size_type n, const value_type& val)
		{
			for (size_type i = 0; i < n; i++)
				this->insert(position, val);
		}
		//ok
		void insert (iterator position, iterator first, iterator last)
		{	
			iterator workingIter(first._curr);
			while(workingIter._curr != last._curr)
			{
				this->insert(position, workingIter._curr->value);
				workingIter.operator++();
			}
		}
		//ok
		iterator erase (iterator position)
		{
			position._curr->prev->next = position._curr->next;
			position._curr->next->prev = position._curr->prev;
			delete position._curr;
			this->_size--;
			return position;
		}
		//ok
		iterator erase (iterator first, iterator last)
		{
			iterator it(first._curr);
			while(it != last)
			{
				this->erase(it);
				it.operator++();
			}
			return it;
		}
		//ok
		void swap (ft::list<T>& x)
		{
			Node<T> *temp = (x._end);
			x._end = this->_end;
			this->_end = temp;
			size_type n = this->_size;
			this->_size = x._size;
			x._size = n;
		}
		//ok
		void resize (size_type n, value_type val = value_type())
		{
			while (this->_size > n)
			{
				this->pop_back();
			}
			while (this->_size < n)
			{
				this->push_back(val);
			}
			
		}
		//ok
		void clear()
		{
			while(this->begin() != this->end())
			{
				this->pop_back();
			}
			this->_size = 0;
		}

		void splice (iterator position, list& x)
		{
			
		}
	
		void splice (iterator position, list& x, iterator i)
		{
			
		}

		void splice (iterator position, list& x, iterator first, iterator last)
		{
			
		}
		//ok
		void remove (const value_type& val)
		{
			iterator it(this->begin());
			while (it != this->_end)
            {
			    if (it._curr->value == val)
                {
			        Node<T> *tmp;
                    tmp = it._curr;
			        it._curr->next->prev = it._curr->prev;
			        it._curr->prev->next = it._curr->next;
                    this->_size--;
			        delete (tmp);
                }
			    it.operator++();
            }

		}

		template <class Predicate>
		void remove_if (Predicate pred)
		{
			
		}
		//ok
		void unique()
		{
			iterator iter(this->begin());
			while(iter != this->end())
			{
				if(iter._curr->value == iter._curr->next->value)
					this->erase(iter);
				iter.operator++();
			} 
		}
		//ok
		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred)
		{
			iterator iter(this->begin());
			iter.operator++();
			while(iter != this->end())
			{
				if(binary_pred(iter._curr->prev->value, iter._curr->prev->value))
					this->erase(iter);
				iter.operator++();
			} 
		}
		//ok
  		void merge (list& x)
		{
  		    iterator it(this->begin());
  		    iterator itx(x.begin());
  		    Node<T> *tmp;
            while(it != this->end())
  		    {
                if (*it > *itx)
                {
                    tmp = itx._curr;
                    itx._curr->next->prev = x._end;
                    x._end->next = tmp->next;
                    ++itx;

                    tmp->next = it._curr;
                    tmp->prev = it._curr->prev;
                    it._curr->prev->next = tmp;
                    it._curr->prev = tmp;
                    x._size--;
                    this->_size++;
                    if(itx == x.end())
                        return;
                }
                else
                    ++it;
  		    }
            if (!x.empty())
            {
                this->_end->prev->next = itx._curr;
                itx._curr->prev = this->_end->prev;
                x._end->prev->next = this->_end;
                this->_end->prev = x._end->prev;
                x._end->next = x._end;
                x._end->prev = x._end;
            }
            this->_size += x._size;
            x._size = 0;
		}
		//ok
		template <class Compare>
  		void merge (list& x, Compare comp)
		{
			iterator it(this->begin());
  		    iterator itx(x.begin());
  		    Node<T> *tmp;
            while(it != this->end())
  		    {
                if (comp(*it, *itx))
                {
                    tmp = itx._curr;
                    itx._curr->next->prev = x._end;
                    x._end->next = tmp->next;
                    ++itx;

                    tmp->next = it._curr;
                    tmp->prev = it._curr->prev;
                    it._curr->prev->next = tmp;
                    it._curr->prev = tmp;
                    x._size--;
                    this->_size++;
                    if(itx == x.end())
                        return;
                }
                else
                    ++it;
  		    }
            if (!x.empty())
            {
                this->_end->prev->next = itx._curr;
                itx._curr->prev = this->_end->prev;
                x._end->prev->next = this->_end;
                this->_end->prev = x._end->prev;
                x._end->next = x._end;
                x._end->prev = x._end;
            }
            this->_size += x._size;
            x._size = 0;
		}
		//ok
  		void sort()
		{
			iterator it(this->begin());
			T tmp;
			it.operator++();
			while(it != this->_end)
			{
				if(it._curr->value < it._curr->prev->value)
				{
					tmp = it._curr->value;
					it._curr->value = it._curr->prev->value;
					it._curr->prev->value = tmp; 
					it = this->begin();
				}
				else
					it.operator++();
			} 
		}
		//ok
		template <class Compare>
		void sort (Compare comp)
		{
			iterator it(this->begin());
			T tmp;
			it.operator++();
			while(it != this->_end)
			{
				if(comp(it._curr->value, it._curr->prev->value))
				{
					tmp = it._curr->value;
					it._curr->value = it._curr->prev->value;
					it._curr->prev->value = tmp; 
					it = ++this->begin();
				}
				else
					it.operator++();
			} 
		}
		//ok
		void reverse()
		{
			iterator it(this->begin());
			iterator end(this->end());
			end.operator--();
			T tmp;
			for (size_type i=0; i <= (this->_size/ 2); i++)
			{
				tmp = end._curr->value;
				end._curr->value = it._curr->value;
				it._curr->value= tmp;
				it.operator++();
				end.operator--();
			}
		}
	};
} 
