#pragma once
#include <iostream>
#include "Node.hpp"

namespace ft
{
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
		this->curr = this->curr->next;
		return this->curr->prev;
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
}
