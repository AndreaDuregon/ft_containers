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
			/* MEMBER */
			//typedef ????							iterator_category
			typedef T								value_type;
			typedef std::ptrdiff_t 					difference_type;
			typedef	value_type*						pointer;
			typedef value_type&						reference;
	
			listIterator() {};
			listIterator(listIterator const &copy) {};

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

			void operator = (Node<T> &node)
			{
				this->curr = node;
			}
	};
}
