/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorList.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:58:47 by dmalori           #+#    #+#             */
/*   Updated: 2021/06/04 14:27:01 by dmalori          ###   ########.fr       */
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
			listIterator() {}
			listIterator(Node<T> *curr) : _curr(curr) {}
			listIterator(listIterator const &copy)
			{
				*this = copy;
			}

			listIterator<T> &operator = (listIterator const &copy)
			{
				this->_curr = copy._curr;
				return *this;
			}

			T			&operator * ()
			{
				return this->_curr->value;
			}

			listIterator<T>	operator++() 
			{
				//std::cout << "PREEEE" << std::endl;
				this->_curr = this->_curr->next;
				return *this;
			}

			listIterator<T>	operator++ (int)
			{
				//std::cout << "POST" << std::endl;
				listIterator<T> it(this->_curr);
				this->operator++();
				return it;
			}

			listIterator<T>	operator-- ()
			{
				this->_curr = this->_curr->prev;
				return *this;
			}

			listIterator<T>	operator-- (int)
			{
				listIterator<T> temp(this->_curr);
				this->operator--();
				return temp;
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
			clistIterator(Node<T> *curr) : listIterator<T>(curr) {}
			clistIterator(clistIterator const &copy)
			{
				*this = copy;
			}
			T	const		&operator * ()
			{
				return this->_curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}
			
			clistIterator<T> &operator = (clistIterator const &copy)
			{
				this->_curr = copy._curr;
				return *this;
			}

			clistIterator<T>	operator++() 
			{
				//std::cout << "PREEEE" << std::endl;
				this->_curr = this->_curr->next;
				return *this;
			}

			clistIterator<T>	operator++ (int)
			{
				//std::cout << "POST" << std::endl;
				clistIterator<T> it(this->_curr);
				this->operator++();
				return it;
			}

			clistIterator<T>	operator-- ()
			{
				this->_curr = this->_curr->prev;
				return *this;
			}

			clistIterator<T>	operator-- (int)
			{
				clistIterator<T> temp(this->_curr);
				this->operator--();
				return temp;
			}

			bool operator==(clistIterator<T> const &other) const {
			return (this->_curr == other._curr);
			}

			bool operator!=(clistIterator<T> const &other) const {
				return (this->_curr != other._curr);
			}

			bool operator<(clistIterator<T> const &other) const {
				return (this->_curr < other._curr);
			}

			bool operator<=(clistIterator<T> const &other) const {
				return (this->_curr <= other._curr);
			}

			bool operator>(clistIterator<T> const &other) const {
				return (this->_curr > other._curr);
			}

			bool operator>=(clistIterator<T> const &other) const {
				return (this->_curr >= other._curr);
			}

	};
	
	template <class T> class rlistIterator : public listIterator<T>
	{
		public:
			rlistIterator() {};
			rlistIterator(Node<T> *curr) : listIterator<T>(curr) {}
			rlistIterator(rlistIterator const &copy)
			{
				*this = copy;
			}
			T	&operator * ()
			{
				return this->_curr->value;
			}
			T	*operator -> ()
			{
				return &this->curr->value;
			}
			
			rlistIterator<T> &operator = (rlistIterator const &copy)
			{
				this->_curr = copy._curr;
				return *this;
			}

			rlistIterator<T>	operator++() 
			{
				this->_curr = this->_curr->prev;
				return *this;
			}

			rlistIterator<T>	operator++ (int)
			{
				//std::cout << "POST" << std::endl;
				rlistIterator<T> it(this->_curr);
				this->operator++();
				return it;
			}

			rlistIterator<T>	operator-- ()
			{
				//std::cout << "PREEEE" << std::endl;
				this->_curr = this->_curr->next;
				return *this;
			}

			rlistIterator<T>	operator-- (int)
			{
				rlistIterator<T> temp(this->_curr);
				this->operator--();
				return temp;
			}

			bool operator==(rlistIterator<T> const &other) const {
			return (this->_curr == other._curr);
			}

			bool operator!=(rlistIterator<T> const &other) const {
				return (this->_curr != other._curr);
			}

			bool operator<(rlistIterator<T> const &other) const {
				return (this->_curr < other._curr);
			}

			bool operator<=(rlistIterator<T> const &other) const {
				return (this->_curr <= other._curr);
			}

			bool operator>(rlistIterator<T> const &other) const {
				return (this->_curr > other._curr);
			}

			bool operator>=(rlistIterator<T> const &other) const {
				return (this->_curr >= other._curr);
			}

	};

	template <class T> class rclistIterator : public listIterator<T>
	{
		public:
			rclistIterator() {};
			rclistIterator(Node<T> *curr) : listIterator<T>(curr) {}
			rclistIterator(rclistIterator const &copy)
			{
				*this = copy;
			}
			T	const		&operator * ()
			{
				return this->_curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}
			
			rclistIterator<T> &operator = (rclistIterator const &copy)
			{
				this->_curr = copy._curr;
				return *this;
			}

			rclistIterator<T>	operator++() 
			{
				this->_curr = this->_curr->prev;
				return *this;
			}

			rclistIterator<T>	operator++ (int)
			{
				//std::cout << "POST" << std::endl;
				rclistIterator<T> it(this->_curr);
				this->operator++();
				return it;
			}

			rclistIterator<T>	operator-- ()
			{
				//std::cout << "PREEEE" << std::endl;
				this->_curr = this->_curr->next;
				return *this;
			}

			rclistIterator<T>	operator-- (int)
			{
				rclistIterator<T> temp(this->_curr);
				this->operator--();
				return temp;
			}

			bool operator==(rclistIterator<T> const &other) const {
			return (this->_curr == other._curr);
			}

			bool operator!=(rclistIterator<T> const &other) const {
				return (this->_curr != other._curr);
			}

			bool operator<(rclistIterator<T> const &other) const {
				return (this->_curr < other._curr);
			}

			bool operator<=(rclistIterator<T> const &other) const {
				return (this->_curr <= other._curr);
			}

			bool operator>(rclistIterator<T> const &other) const {
				return (this->_curr > other._curr);
			}

			bool operator>=(rclistIterator<T> const &other) const {
				return (this->_curr >= other._curr);
			}
	};
	

}
