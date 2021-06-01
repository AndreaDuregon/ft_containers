/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorBinaryTree.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/01 10:45:18 by aduregon         ###   ########.fr       */
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
			while (1)
			{
				if (this->_curr->right && this->_prev != this->_curr->right)
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
				else if (this->_curr->father->left && this->_curr->father->left == this->_curr)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->father;
					return this;
				}
				else if (this->_curr->father->right && this->_curr->father->right == this->_curr)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->father;
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

		binaryTreeIterator<T>	*operator-- ()
		{
			while (1)
			{
				if (this->_curr->left && this->_prev != this->_curr->left)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->left;
					while (this->_curr->right)
					{
						this->_prev = this->_curr;
						this->_curr = this->_curr->right;
					}
					return this;
				}
				else if (this->_curr->father->right && this->_curr->father->right == this->_curr)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->father;
					return this;
				}
				else if (this->_curr->father->left && this->_curr->father->right == this->_curr)
				{
					this->_prev = this->_curr;
					this->_curr = this->_curr->father;
				}			
			}
			return 0;
		}

		binaryTreeIterator<T>	operator-- (int)
		{
			binaryTreeIterator<T> temp(this->_curr);
			this->operator--();
			return temp;
		}

		TreeNode<T>	*operator -> ()
		{
			return this->_curr;
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
