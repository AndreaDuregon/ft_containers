/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorBinaryTree.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/27 15:56:19 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"

namespace ft
{
	template <class T>
	class binaryTreeIterator
	{
	protected:
	public:
		TreeNode<T>	*_curr;
		TreeNode<T> *_prev;
		/* MEMBER */
		//typedef ???			iterator_category;
		typedef T				value_type;
		typedef std::ptrdiff_t 	difference_type;
		typedef value_type *	pointer;
		typedef value_type &	reference;
		binaryTreeIterator() {};
		binaryTreeIterator(TreeNode<T> *curr) : _curr(curr) {};
		binaryTreeIterator(binaryTreeIterator const &copy)
		{
			*this = copy;
		}

		binaryTreeIterator<T> &operator = (binaryTreeIterator const &copy)
		{
			this->_curr = copy._curr;
			return *this;
		}

		T			operator * ()
		{
			return *this->_curr->value;
		}

		binaryTreeIterator<T>	*operator++()
		{
			/*
			if (this->_curr->right)
			{
				this->_curr = this->_curr->right;
				while (this->_curr->left)
				{
					this->_curr = this->_curr->left;
				}
				return this;
			}
			else
			{
				if (this->_curr->father->left && this->_curr->father->left->value == this->_curr->value)
				{
					this->_curr = this->_curr->father;
					return this;
				}
				else if (this->_curr->father->right && this->_curr->father->right->value == this->_curr->value)
				{
					this->_curr = this->_curr->father;
					return this;
				}
			}
			return 0;
			*/
			while (1)
			{
				if (this->_curr->right && this->_prev->value != this->_curr->right->value)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->right;
					while (this->_curr->left)
					{
						this->_prev = this->_curr;
						this->_curr = this->_curr->left;
					}
					return this;
				}
				else
				{
					//if (this->_curr.value == this->_root->value && this->_prev.value == this->_root->right->value)
					//	break;
					if (this->_curr->father->left && this->_curr->father->left->value == this->_curr->value)
					{
						this->_prev = this->_curr;
						this->_curr = this->_curr->father;;
						return this;
					}
					else if (this->_curr->father->right && this->_curr->father->right->value == this->_curr->value)
					{
						this->_prev = this->_curr;
						this->_curr = this->_curr->father;
					}
				}
			}
			return 0;
		}

		binaryTreeIterator<T>	operator++ (int)
		{
			//std::cout << "POST" << std::endl;
			binaryTreeIterator<T> it(this->_curr);
			this->operator++();
			return it;
		}

		binaryTreeIterator<T>	operator-- ()
		{
			this->_curr = this->_curr->prev;
			return *this;
		}

		binaryTreeIterator<T>	operator-- (int)
		{
			binaryTreeIterator<T> temp(this->_curr);
			this->operator--();
			return temp;
		}

		T				*operator -> ()
		{
			return &this->_curr->value;
		}

		bool operator==(binaryTreeIterator<T> const &other) const {
			return (this->_curr == other._curr);
		}

		bool operator!=(binaryTreeIterator<T> const &other) const {
			return (this->_curr != other._curr);
		}

		bool operator<(binaryTreeIterator<T> const &other) const {
			return (this->_curr < other._curr);
		}

		bool operator<=(binaryTreeIterator<T> const &other) const {
			return (this->_curr <= other._curr);
		}

		bool operator>(binaryTreeIterator<T> const &other) const {
			return (this->_curr > other._curr);
		}

		bool operator>=(binaryTreeIterator<T> const &other) const {
			return (this->_curr >= other._curr);
		}
	};
}
