#pragma once
#include <iostream>
#include "Node.hpp"

namespace ft
{
	template <class T> class listIterator
	{
		protected:
			Node<T>	*curr;
		public:
			/* MEMBER */
			//typedef ???			iterator_category;
			typedef T				value_type;
			typedef std::ptrdiff_t 	difference_type;
			typedef value_type *	pointer;
			typedef value_type &	reference;
			typedef listIterator<T> iterator;
			listIterator() {};
			listIterator(listIterator const &copy) {};


			T			&operator * ()
			{
				return this->curr->value;
			}

			listIterator<T>	&operator ++ ()
			{
				this->curr = this->curr->next;
				return this->curr->prev;
			}

			listIterator<T>	&operator ++ (int)
			{
				this->curr = this->curr->next;
				return this->curr;
			}

			listIterator<T>	&operator -- ()
			{
				this->curr = this->curr->prev;
				return this->next;
			}

			listIterator<T>	&operator -- (int)
			{
				this->curr = this->curr->prev;
				return this->curr;
			}

			T			*operator -> ()
			{
				return &this->curr->value;
			}
	};
	
	template <class T> class clistIterator : public listIterator
	{
		public:
			T	const		&operator * ()
			{
				return this->curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}	
	};
	
	template <class T> class rlistIterator : public listIterator
	{
		public:
			iterator	&operator -- ()
			{
				this->curr = this->curr->next;
				return this->curr->prev;
			}

			iterator	&operator -- (int)
			{
				this->curr = this->curr->next;
				return this->curr;
			}

			iterator	&operator ++ ()
			{
				listIterator<T>::iterator temp = this;
				this->curr = this->curr->prev;
				return this->curr;
			}

			iterator	&operator ++ (int)
			{
				this->curr = this->curr->prev;
				return this->curr;
			}
	};

	template <class T> class rclistIterator : public rlistIterator
	{
		public:
			T	const		&operator * ()
			{
				return this->curr->value;
			}
			T	const		*operator -> ()
			{
				return &this->curr->value;
			}	
	};
	

};
