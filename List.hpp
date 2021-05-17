/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiovo <sgiovo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/14 17:58:44 by sgiovo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
struct Node
{
	T		value;
	Node	*next;
	Node	*prev;
};

namespace ft
{
	template <class T> class ListIterator
	{
	private:
		Node<T>	*curr;
	public:
		typedef T				value_type;
		typedef std::ptrdiff_t 	difference_type;
		typedef T*				pointer;
		typedef T&				reference;
		ListIterator();
		ListIterator(ListIterator const &copy);
		~ListIterator();

		typedef ListIterator<T> iterator;

		T			&operator * ();
		iterator	&operator ++ ();
		iterator	&operator ++ (int);
		// ListIterator &operator -- (ListIterator const &op);
		// ListIterator &operator --(int) (ListIterator const &op);
		// ListIterator &operator -> (ListIterator const &op);
		// ListIterator &operator [] (ListIterator const &op);
	};
	
	template <typename T>
	T	&ListIterator<T>::operator * ()
	{
		return this->curr->value;
	}

	template <typename T>
	typename ListIterator<T>::iterator	&ListIterator<T>::operator ++ (int)
	{
		this->curr = this->curr->next;
		return this->curr;
	}

	template <typename T>
	typename ListIterator<T>::iterator	&ListIterator<T>::operator ++ ()
	{
		ListIterator<T>::iterator temp = this;
		this->curr = this->curr->next;
		return this;
	}

	

	template < class T, class Alloc = std::allocator<T> > class List
	{
	private:
		/* data */
	public:
		List(/* args */);
		~List();

		//typedef List<Node *>::ListIterator iterator;
	};

}