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

		T			&operator * ()
		{
			return this->curr->value;
		}

		iterator	&operator ++ ()
		{
			this->curr = this->curr->next;
			return this->curr->prev;
		}

		iterator	&operator ++ (int)
		{
			this->curr = this->curr->next;
			return this->curr;
		}

		iterator	&operator -- ()
		{
			listIterator<T>::iterator temp = this;
			this->curr = this->curr->prev;
			return this->curr;
		}

		iterator	&operator -- (int)
		{
			this->curr = this->curr->prev;
			return this->curr;
		}

		T			*operator -> ()
		{
			return &this->curr->value;
		}
    };
}
