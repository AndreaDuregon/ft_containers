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

			T				*operator -> ()
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
	
	template <class T> class rlistIterator : public listIterator
	{
		public:
			rlistIterator<T>		&operator -- ()
			{
				this->curr = this->curr->next;
				return this->curr->prev;
			}

			rlistIterator<T>		&operator -- (int)
			{
				this->curr = this->curr->next;
				return this->curr;
			}

			rlistIterator<T>		&operator ++ ()
			{
				listIterator<T>::iterator temp = this;
				this->curr = this->curr->prev;
				return this->curr;
			}

			rlistIterator<T>		&operator ++ (int)
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
				listIterator<T>::iterator temp = this;
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
