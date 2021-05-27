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
		if (this->_size == 0)
			return true;
		ft::binaryTreeIterator<T> it = this->begin();
		int blackNodesStart = blackNodes(it);
		if (this->_root->color == ft::RED)
			return false;
		while (it != this->end())
		{
			if (it._curr->color == ft::RED && it._curr->father->color == ft::RED)
				return false;
			if (!it._curr->left && !it._curr->right && blackNodes(it) != blackNodesStart)
				return false;
			++it;
		}
		return true;
	}

	int	blackNodes(ft::binaryTreeIterator<T> it)
	{
		ft::binaryTreeIterator<T> tmp = it;
		int n = 0;
		while (*tmp._curr->value != *this->_root->value)
		{
			if (tmp._curr->color == ft::BLACK)
				n++;
			tmp = tmp._curr->father;
		}
		return n;
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
		if (x == x->father->left)
			x->father->left = x->right;
		else
			x->father->right = x->right;
		
		value_type *temp = x->father;
		x->father = x->right;
		//
		if (x->right->left)
			x->right = x->father->left;
		else
			x->right = 0;
		x->father->left = x;
		x->father->father = temp;
		//std::cout << "ooo" << std::endl;
		if (x->right)
			x->right->father = x;
	}

	void leftRotation(value_type *x)
	{
		if (!x->right || !x->left)
			return ;
		if (x == _root)
		{
			_root->father = x->right;
			_root = x->right;
			_root->father->right = _root->left;
			_root->left->father = _root->father;
			_root->left = _root->father;
			_root->father = 0;
			return ;
		}
		if (x == x->father->right)
			x->father->right = x->left;
		else
			x->father->left = x->left;
		
		value_type *temp = x->father;
		x->father = x->left;
		//
		if (x->left->right)
			x->left = x->father->right;
		else
			x->left = 0;
		x->father->right = x;
		x->father->father = temp;
		//std::cout << "ooo" << std::endl;
		if (x->left)
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
		this->_begin = tmp;
		return binaryTreeIterator<T>(tmp);
	}

	binaryTreeIterator<T> rbegin(void)
	{
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
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

	binaryTreeIterator<T> rend(void)
	{
		if (this->_begin->father)
		{
			this->_begin->father->left = 0;
			this->_begin->father = 0;
		}
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		tmp->left = this->_begin;
		this->_begin->father = tmp;
		return binaryTreeIterator<T>(this->_begin);
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
				matrix[i][j] = std::string("    ");
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

	}
};

}
