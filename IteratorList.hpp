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
			typedef T								value_type;
			//typedef	0							allocator_type;
			typedef value_type&						reference;
			typedef const value_type&				const_reference;
			typedef	value_type*						pointer;
			typedef	const value_type*				const_pointer;
			typedef typename ft::listIterator<T>	iterator;
			typedef typename ft::listIterator<T>	const_iterator;
			typedef	typename ft::listIterator<T>	reverse_iterator;
			typedef	typename ft::listIterator<T>	const_reverse_iterator;
			typedef std::ptrdiff_t 					difference_type;
			typedef size_t							size_type;
	
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
