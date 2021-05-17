#pragma once
#include <iostream>
#include "Node.hpp"

namespace ft
{
	template <class T> class listIterator
	{
		protected:
			Node<T>	*_curr;
		public:
			/* MEMBER */
			//typedef ???			iterator_category;
			typedef T				value_type;
			typedef std::ptrdiff_t 	difference_type;
			typedef value_type *	pointer;
			typedef value_type &	reference;
			listIterator() {};
			listIterator(Node<T> *curr) : _curr(curr) {};
			listIterator(listIterator const &copy) {};

			T			&operator * ()
			{
				return this->_curr->value;
			}

			listIterator<T>	&operator ++ ()
			{
				this->_curr = this->_curr->next;
				return this->_curr->prev;
			}

			listIterator<T>	&operator ++ (int)
			{
				this->_curr = this->_curr->next;
				return this->_curr;
			}

			listIterator<T>	&operator -- ()
			{
				this->_curr = this->_curr->prev;
				return this->next;
			}

			listIterator<T>	&operator -- (int)
			{
				this->_curr = this->_curr->prev;
				return this->_curr;
			}

			T			*operator -> ()
			{
				return &this->_curr->value;
			}
	};
	
	template <class T> class clistIterator : public listIterator<T>
	{
		public:
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

	template <class T> class rclistIterator : public rlistIterator<T>
	{
		public:
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
