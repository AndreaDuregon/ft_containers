#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>
#define BG_BLACK "\033[0;100m"
#define BG_RED "\033[0;101m"
#define OFF "\033[0m"

namespace ft
{

template <class T> class  RBTree
{
	public:

	typedef std::size_t        size_type;
	typedef ft::TreeNode<T>    value_type;

	value_type *_root;
	value_type *_end;
	value_type *_begin;
	size_type _size;
	size_type _deep;

	RBTree() : _root(0), _size(0), _deep(0) {
		this->_end = new value_type();
		this->_begin = new value_type();
	}

	value_type &insert (value_type &newNode)
	{
		if (this->_root)
		{
			size_type newDeep = 1;
			value_type *tmp = this->_root;
			while(true)
			{
				if (*newNode.value == *tmp->value)
					return *tmp;
				else if (*newNode.value > *tmp->value && tmp->right)
				{
					newDeep++;
					tmp = tmp->right;
				}
				else if (*newNode.value < *tmp->value && tmp->left)
				{
					newDeep++;
					tmp = tmp->left;
				}
				else
					break;
			}
			if (*newNode.value > *tmp->value)
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
	void role1(value_type &node)
	{
		if (!node.father)
			node.color = ft::BLACK;
	}

	//Lo zio del nodo è rosso - ROLE2
	void role2(value_type &node)
	{
		if (node.father && node.father->father)
		{
			if (node.father == node.father->father->left &&
				node.father->father->right && node.father->father->right->color == ft::RED)
			{
				node.father->father->color = ft::RED;
				node.father->father->right->color = ft::BLACK;
			}
			else if (node.father == node.father->father->right &&
				node.father->father->left && node.father->father->left->color == ft::RED)
			{
				node.father->father->color = ft::RED;
				node.father->father->left->color = ft::BLACK;
			}
		}
	}

	//Lo zio è nero (TRIANGOLO) - ROLE3
	void role3(value_type &node)
	{
		if (node.father && node.father->father)
		{
			if (node.father->left == node && !node.right)
			{
				if (node.father->father->right == node.father && node.father->father->left->color == ft::BLACK)
				{
					node.right = node.father;
					node.left = node.father->right;
					node.father->right = 0;
					node.father->left = 0;
					node.father->father->right = node;
					node.father = node.father->father;
					node.right->father = node;
				}
			}
			else if (node.father->left == node && !node.right)
			{
				if (node.father->father->left == node.father && node.father->father->right->color == ft::BLACK)
				{
					node.left = node.father;
					node.right = node.father->left;
					node.father->right = 0;
					node.father->left = 0;
					node.father->father->left = node;
					node.father = node.father->father;
					node.left->father = node;
				}
			}
		}
	}

	//Lo zio è nero (LINEA) - ROLE4
	void role4 (value_type &node)
	{
		
	}

	bool isValid(void)
	{
		
		return false;
	}

	void leftRotation(value_type *x)
	{

	}

	void rightRotation(value_type *x)
	{
		if (!x->left)
			return ;
		if (x == _root)
		{
			_root->father = x->left;
			_root = x->left;
			_root->father->left = _root->right;
			_root->right->father = _root->father;
			_root->right = _root->father;
			_root->father = 0;
			return ;
		}
		if (x == x->father->right)
			x->father->right = x->left;
		else
			x->father->left = x->left;
		value_type *temp = x->father;
		x->father = x->left;
		x->left = x->father->right;
		x->father->right = x;
		x->father->father = temp;
		x->left->father = x;
	}

	void fixTree(value_type &node)
	{

	}

	binaryTreeIterator<T> begin(void)
	{
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		return binaryTreeIterator<T>(tmp);
	}

	binaryTreeIterator<T> end(void)
	{
		if (this->_end->father)
		{
			this->_end->father->right = 0;
			this->_end->father = 0;
		}
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
		tmp->right = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	void printTree(void)
	{
		std::vector< std::vector<std::string> > matrix;
		int row = this->_deep + 1;
		int col = std::pow(2, this->_deep + 1) - 1;

		matrix.resize(row);
		for(int i = 0 ; i < row ; ++i)
		{
			matrix[i].resize(col);
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				matrix[i][j] = std::string(".   ");
		}
		
		printD2435(col, matrix, this->_root, std::vector<int>());

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
					if (matrix[i][j].length() < 13)
						std::cout << matrix[i][j];
					else
					{
						std::cout << matrix[i][j];				
						for (size_t ii = matrix[i][j].length(); ii <= 15; ii++)
							std::cout << " ";
					}
			}
			std::cout << std::endl;
		}
	}

	void printD2435(int x, std::vector< std::vector<std::string> > &matrix, value_type *root, std::vector<int> info) {
		if (root == this->_end)
			return;

		if (root->left)
		{
			std::vector<int> newInfo(info);
			newInfo.push_back(0);
			printD2435(x, matrix, root->left, newInfo);
		}
		if (root->right)
		{
			std::vector<int> newInfo(info);
			newInfo.push_back(1);
			printD2435(x, matrix, root->right, newInfo);
		}
		//std::cout<< root->value << " -> ";
		int _col = (x  - 1) / 2;
		int _row = info.size();
		for (int i = 1; i < info.size() + 1; i++)
		{
			int _dif = this->_deep - i;
			if (info[i - 1] == 0)
			{
				//std::cout << "LEFT, ";
				//if (_col < x / 2)
				if (_col > (x  - 1) / 2)
					_col -= _dif;
				else if (_col < (x  - 1) / 2)
					_col -= _dif + 1;
				else
					_col -= _dif + 1;
			}
			else
			{
				//std::cout << "RIGHT, ";
				//_col += _dif;
				if (_col > (x  - 1) / 2)
					_col += _dif ;
				else if (_col < (x  - 1) / 2)
					_col += _dif;
				else
					_col += _dif + 1;
			}
		}

		//std::cout << "[" << _row << ", " << _col << "]";
		std::stringstream ss;

		if (root->color == ft::RED)
			ss << BG_RED;
		else
			ss << BG_BLACK;
		ss << root->value->getKey();
		ss << OFF;
		std::string s;  
		ss >> s;
		matrix[_row][_col] = s;
		//std::cout << std::endl;
	}

	void	iterate()
	{
		/*
		value_type curr = this->begin();
		value_type end = this->end();
		value_type prev = this->begin();
		std::cout << *curr.value<< " ";
		while (1)
		{
			if (curr.right && prev.value != curr.right->value)
			{
				prev = curr;
				curr = *curr.right;
				while (curr.left)
				{
					prev = curr;
					curr = *curr.left;
				}
				std::cout << *curr.value<< " ";
			}
			else
			{
				if (curr.value == this->_root->value && prev.value == this->_root->right->value)
					break;
				if (curr.father->left && curr.father->left->value == curr.value)
				{
					prev = curr;
					curr = *curr.father;
					std::cout << *curr.value<< " ";
				}
				else if (curr.father->right && curr.father->right->value == curr.value)
				{
					prev = curr;
					curr = *curr.father;
				}
			}
		}
		*/
	}
};

}
