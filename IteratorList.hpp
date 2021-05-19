/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorList.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:58:47 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/19 11:35:42 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Node.hpp"

namespace ft
{
	template <class T> class listIterator
	{
		protected:
		public:
			Node<T>	*_curr;
			/* MEMBER */
			//typedef ???			iterator_category;
			typedef T				value_type;
			typedef std::ptrdiff_t 	difference_type;
			typedef value_type *	pointer;
			typedef value_type &	reference;
			listIterator() {};
			listIterator(Node<T> *curr) : _curr(curr) {};
			listIterator(listIterator const &copy)
			{
				this->_curr = new Node<T>();
				this->_curr->next = copy._curr->next;
				this->_curr->prev = copy._curr->prev;
				this->_curr->value = copy._curr->value;
			}

			T			&operator * ()
			{
				return this->_curr->value;
			}

			listIterator<T>	&operator ++ ()
			{
				listIterator<T> tmp(*this);
				this->_curr = this->_curr->next;
				return tmp;
			}

			listIterator<T>	&operator ++ (int)
			{
				this->_curr = this->_curr->next;
				return *this;
			}

			listIterator<T>	&operator -- ()
			{
				this->_curr = this->_curr->prev;
				return *this;
			}

			listIterator<T>	&operator -- (int)
			{
				listIterator<T> *temp =  new listIterator<T>();
				temp->_curr = this->_curr;
				this->_curr = this->_curr->prev;
				return *temp;
			}

			T				*operator -> ()
			{
				return &this->_curr->value;
			}

			bool operator==(listIterator<T> const &other) const {
			return (this->_curr == other._curr);
			}

			bool operator!=(listIterator<T> const &other) const {
				return (this->_curr != other._curr);
			}

			bool operator<(listIterator<T> const &other) const {
				return (this->_curr < other._curr);
			}

			bool operator<=(listIterator<T> const &other) const {
				return (this->_curr <= other._curr);
			}

			bool operator>(listIterator<T> const &other) const {
				return (this->_curr > other._curr);
			}

			bool operator>=(listIterator<T> const &other) const {
				return (this->_curr >= other._curr);
			}
	};
	
	template <class T> class clistIterator : public listIterator<T>
	{
		public:
			clistIterator() {};
			clistIterator(Node<T> *curr) : listIterator<T>(curr) {};
			clistIterator(clistIterator const &copy) {};
			T	const		&operator * ()
			{
				return this->_curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}
			clistIterator<T>	&operator ++ ()
			{
				this->curr = this->curr->next;
				return this->curr->prev;
			}

			clistIterator<T>	&operator ++ (int)
			{
				this->curr = this->curr->next;
				return this->curr;
			}

			clistIterator<T>	&operator -- ()
			{
				this->curr = this->curr->prev;
				return this->next;
			}

			clistIterator<T>	&operator -- (int)
			{
				this->curr = this->curr->prev;
				return this->curr;
			}


	};
	
	template <class T> class rlistIterator : public listIterator<T>
	{
		public:
			rlistIterator() {};
			rlistIterator(Node<T> *curr) : listIterator<T>(curr) {};
			rlistIterator(rlistIterator const &copy) {};
			rlistIterator<T>		&operator -- ()
			{
				this->_curr = this->_curr->next;
				return this->_curr->prev;
			}

			rlistIterator<T>		&operator -- (int)
			{
				this->_curr = this->_curr->next;
				return this->_curr;
			}

			rlistIterator<T>		&operator ++ ()
			{
				this->_curr = this->_curr->prev;
				return this->_curr;
			}

			rlistIterator<T>		&operator ++ (int)
			{
				this->_curr = this->_curr->prev;
				return this->_curr;
			}
	};

	template <class T> class rclistIterator : public listIterator<T>
	{
		public:
			rclistIterator() {};
			rclistIterator(Node<T> *curr) : listIterator<T>(curr) {};
			rclistIterator(rclistIterator const &copy) {};
			T	const		&operator * ()
			{
				return this->_curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}
			rclistIterator<T>		&operator -- ()
			{
				this->curr = this->curr->next;
				return this->curr->prev;
			}

			rclistIterator<T>		&operator -- (int)
			{
				this->curr = this->curr->next;
				return this->curr;
			}

			rclistIterator<T>		&operator ++ ()
			{
				this->curr = this->curr->prev;
				return this->curr;
			}

			rclistIterator<T>		&operator ++ (int)
			{
				this->curr = this->curr->prev;
				return this->curr;
			}
	};
	

};
