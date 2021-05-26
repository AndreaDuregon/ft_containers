#pragma once

#include "TreeNode.hpp"
#include <iostream>
#include <sstream>

namespace ft
{

template <class Key, class Value> class  RBTree
{
	public:

	typedef std::size_t                 size_type;
	typedef ft::TreeNode<Key, Value>    value_type;

	value_type *_root;
	size_type _size;
	size_type _deep;

	RBTree() : _root(0), _size(0), _deep(0) {}

	value_type &insert (value_type &newNode)
	{
		if (this->_root)
		{
			size_type newDeep = 1;
			value_type *tmp = this->_root;
			while(true)
			{
				if (newNode.value->first == tmp->value->first)
					return *tmp;
				else if (newNode.value->first > tmp->value->first && tmp->right)
				{
					newDeep++;
					tmp = tmp->right;
				}
				else if (newNode.value->first < tmp->value->first && tmp->left)
				{
					newDeep++;
					tmp = tmp->left;
				}
				else
					break;
			}
			if (newNode.value->first > tmp->value->first)
				tmp->right = &newNode;
			else
				tmp->left = &newNode;
			if (++newDeep > this->_deep)
				this->_deep = newDeep;
			newNode.father = tmp;
			this->_size++;
			fixTree(newNode);
		}
		else
		{
			// NODO DI ROOT
			this->_size++;
			this->_root = &newNode;
			newNode.color = ft::BLACK;
			this->_deep = 1;
		}
		return newNode;
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

	value_type &begin(void)
	{
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		return *tmp;
	}

	value_type &end(void)
	{
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
		return *tmp;
	}

	void print(void)
	{
		int x = ((this->_deep - 1) * (this->_deep - 1)) + 1;
		int y = this->_deep;
		std::string matrix [x][y];
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{

				matrix[x][y] = std::string(".");
			}
		}
		matrix[1][1] = std::string(std::to_string(this->_root->value->first));
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
				std::cout << matrix[x][y];
			std::cout<< std::endl;
		}
	}
	void printHelper(value_type root, std::string &indent, bool last) {
		if (root.left || root.right) {
			//if (root) {
			//	return;
			//}
			std::cout<<indent;
			if (last) {
				std::cout<<"R----";
				indent += "     ";
			} else {
				std::cout<<"L----";
				indent += "|    ";
			}
			std::string sColor = root.color == ft::RED ? "RED":"BLACK";
			std::cout<<root.value->first<<"("<<sColor<<")"<<std::endl;
			if (root.left)
				printHelper(*root.left,  indent, false);
			if (root.right)
				printHelper(*root.right, indent, true);
		}
	}

	void printD2435(value_type root) {
		if (root.left || root.right) {
			if (root.left)
				printD2435(*root.left);
			if (root.right)
				printD2435(*root.right);
		}
		std::cout<< root.value->first;
	}

};

}
