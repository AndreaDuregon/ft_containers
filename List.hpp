/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:49 by sgiovo            #+#    #+#             */
/*   Updated: 2021/05/15 15:57:34 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


namespace ft
{
	template <typename T>
	struct Node
	{
		T		value;
		Node	*next;
		Node	*prev;
	};

	template <class T> class listIterator
	{
	private:
		Node<T>	*curr;
	public:
		typedef T				value_type;
		typedef std::ptrdiff_t 	difference_type;
		typedef T*				pointer;
		typedef T&				reference;
		listIterator() {};
		listIterator(listIterator const &copy) {};
		~listIterator() {};

		typedef listIterator<T> iterator;

		T			&operator * ();
		iterator	&operator ++ ();
		iterator	&operator ++ (int);
		iterator	&operator -- ();
		iterator	&operator -- (int);
		T			*operator -> ();
	};
	
	template <typename T>
	T	&listIterator<T>::operator * ()
	{
		return this->curr->value;
	}

	template <typename T>
	T	*listIterator<T>::operator -> ()
	{
		return &this->curr->value;
	}

	template <typename T>
	typename listIterator<T>::iterator	&listIterator<T>::operator ++ (int)
	{
		this->curr = this->curr->next;
		return this->curr;
	}

	template <typename T>
	typename listIterator<T>::iterator	&listIterator<T>::operator ++ ()
	{
		listIterator<T>::iterator temp = this;
		this->curr = this->curr->next;
		return this->curr;
	}

	template <typename T>
	typename listIterator<T>::iterator	&listIterator<T>::operator -- ()
	{
		listIterator<T>::iterator temp = this;
		this->curr = this->curr->prev;
		return this->curr;
	}

	template <typename T>
	typename listIterator<T>::iterator	&listIterator<T>::operator -- (int)
	{
		this->curr = this->curr->prev;
		return this->curr;
	}

	

	template < class T, class Alloc = std::allocator<T> > class List
	{
	private:
		/* data */
	public:
		List(/* args */);
		~List();

		//typedef List<Node *>::listIterator iterator;
	};

}