#pragma once

#include "TreeNode.hpp"

namespace ft
{

template <class Key, class Value> class  RBTree
{
	public:

	typedef std::size_t                 size_type;
	typedef ft::TreeNode<Key, Value>    value_type;

	value_type *_root;
	size_type _size;

	RBTree() : _root(0), _size(0) {}

	void insert (value_type &newNode)
	{
		if (this->_root)
		{
			value_type *tmp = this->_root;
			while(true)
			{
				if (newNode.value->first > tmp->value->first && tmp->right)
					tmp = tmp->right;
				else if (newNode.value->first < tmp->value->first && tmp->left)
					tmp = tmp->left;
				else
					break;
			}
			if (newNode.value->first > tmp->value->first)
				tmp->right = &newNode;
			else
				tmp->left = &newNode;
			newNode.father = tmp;
			this->_size++;
			fixTree(newNode);
		}
		else
		{
			this->_size++;
			this->_root = &newNode;
			newNode.color = ft::BLACK;
		}
	}

	//Il nodo inserito è la root - ROLE1
	void role1(value_type node)
	{

	}

	//Lo zio del nodo è rosso - ROLE2
	void role2(value_type node)
	{
		if (node.father && node.father->father)
		{
			if (node.father->father->left && node.father == node.father->father->left &&
				node.father->father->right && node.father->father->right->color == ft::RED)
			{
				node.father->father->color = ft::RED;
				node.father->father->right->color = ft::BLACK;
			}
			else if (node.father->father->right && node.father == node.father->father->right &&
				node.father->father->left && node.father->father->left->color == ft::RED)
			{
				node.father->father->color = ft::RED;
				node.father->father->left->color = ft::BLACK;
			}
		}
	}

	//Lo zio è nero (TRIANGOLO) - ROLE3
	void role3(value_type node)
	{

	}

	//Lo zio è nero (LINEA) - ROLE4
	void role4 (value_type node)
	{

	}

	bool isValid(void)
	{

	}

	void leftRotation(void)
	{

	}

	void rigthRotation(void)
	{

	}

	void fixTree(value_type &node)
	{

	}

};

}
