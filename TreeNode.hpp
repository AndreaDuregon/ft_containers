//
// Created by Simone Giovo on 24/05/2021.
//

#pragma once
#include "Pair.hpp"

namespace ft
{
	enum Color {
		RED,
		BLACK,
		DBLACK
	};

	template < class T>
	struct TreeNode
	{
		typedef T								value_type;
		typedef ft::TreeNode<T>					node_type;

		ft::Color								color;
		value_type								*value;
		node_type								*father;
		node_type								*left;
		node_type								*right;


		TreeNode () : color(ft::RED), value(new value_type()), father(0), left(0), right(0) {}

		TreeNode (T node) : color(ft::RED), value(new value_type(node)), father(0), left(0), right(0) {}

		TreeNode<T> &operator = (TreeNode<T> const &other)
        {
		    this->color = other.color;
		    this->value = other.value;
		    this->father = other.father;
		    this->left = other.left;
		    this->right = other.right;
            return (*this);
        }

		~TreeNode()
        {
		    //std::cout << *this->value << std::endl;
		    delete this->value;
        }

		TreeNode * uncle()
        {
            if (father == NULL or father->father == NULL)
                return NULL;
            if (father->isOnLeft())
                return father->father->right;
            else
                return father->father->left;
        }

        TreeNode *sibling() {
            if (father == NULL)
                return NULL;
            if (this->isOnLeft())
                return father->right;
            return father->left;
        }

        void moveDown(TreeNode<T> *nfather) {
            if (father != NULL) {
                if (isOnLeft()) {
                    father->left = nfather;
                } else {
                    father->right = nfather;
                }
            }
            nfather->father = father;
            father = nfather;
        }

        bool isOnLeft()
        {
		    return this == father->left;
        }

        bool hasRedChild() {
            return (left != NULL and left->color == RED) or
                   (right != NULL and right->color == RED);
        }

		bool operator > (const TreeNode &other)
		{
			return (this->value > other.value);
		} 

		bool operator < (const TreeNode &other)
		{
			return (this->value < other.value);
		} 

		bool operator == (const TreeNode &other)
		{
			return (this->value == other.value);
		}

		bool operator != (const TreeNode &other)
		{
			return (this->value != other.value);
		} 
	};

	template <class T>
	std::ostream& operator<<(std::ostream &output, const TreeNode<T> &obj)
	{
		output << obj.value;
		return (output);
	}
}
