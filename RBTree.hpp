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
		this->_end->father = 0;
		this->_begin = new value_type();
		this->_begin->father = 0;
	}

	value_type &insert (value_type &newNode)
	{

		this->removeGhostNodes();
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
			this->fixTree(&newNode);
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

	//Il nodo inserito è la root - rule1
	value_type *rule1(value_type *node)
	{
		node->color = ft::BLACK;
		return node;
	}

	//Lo zio del nodo è rosso - rule2 LEFT
	value_type *rule2_left(value_type *node)
	{
		node->father->father->color = ft::RED;
		node->father->father->left->color = ft::BLACK;
		node->father->color = ft::BLACK;
		return node->father->father;
	}

	//Lo zio del nodo è rosso - rule2 RIGHT
	value_type *rule2_right (value_type *node)
	{
		node->father->father->color = ft::RED;
		node->father->father->right->color = ft::BLACK;
		node->father->color = ft::BLACK;
		return node->father->father;
	}

	//Lo zio è nero (TRIANGOLO) - rule3 DESTRA
	value_type *rule3_right(value_type *node)
	{
		this->leftRotation(node->father);
		return node->left;
	}

	//Lo zio è nero (TRIANGOLO) - rule3 SINISTRA
	value_type *rule3_left(value_type *node)
	{
		this->rightRotation(node->father);
		return node->right;
	}

	//Lo zio è nero (LINEA) - rule4 SINISTRA
	value_type *rule4_left (value_type *node)
	{
		if (node->color == ft::RED && node->father->color == ft::RED)
			node->color = ft::BLACK;
		this->leftRotation(node->father->father);	
		return node->father;
	}

	//Lo zio è nero (LINEA) - rule4 DESTRA
	value_type *rule4_right (value_type *node)
	{
		if (node->color == ft::RED && node->father->color == ft::RED)
			node->color = ft::BLACK;
		this->rightRotation(node->father->father);
		return node->father;
	}

	void fixTree(value_type *node)
	{

		//this->printTree();
		int err = 1;
		//char test;
		while((err = this->isValid()) != 1)
		{
			//std::cout << err << std::endl;
			this->removeGhostNodes();
			// ROOT COLORE NERO
			if (!node->father && node->color == ft::RED)
			{
				//std::cout << "ROOT ROSSA: " << *node->value << std::endl;
				rule1(node);
			}
			//ZIO ROSSO
			else if (node->father && node->father->father && ((node->father->father->right && node->father->father->right != node->father && node->father->father->right->color == ft::RED) || (node->father->father->left && node->father->father->left != node->father && node->father->father->left->color == ft::RED)) )
			{
				//DI SINISTRA
				if (node->father == node->father->father->right && node->father->father->left && node->father->father->left->color == ft::RED)
				{
					//std::cout << "ZIO ROSSO SINISTRA: " << *node->value << std::endl;
					node = rule2_left(node);
				}
				//DI DESTRA
				else if (node->father == node->father->father->left && node->father->father->right && node->father->father->right->color == ft::RED)
				{
					//std::cout << "ZIO ROSSO DESTRA: " << *node->value << std::endl;
					node = rule2_right(node);
				}	
			}
			//ZIO NERO
			else if (node->father && node->father->father)
			{
				// ZIO DESTRA
				if (!node->father->father->right || (node->father->father->right->color == ft::BLACK && node->father->father->right != node->father))
				{
					//LINEA
					if (node->father->left && node == node->father->left)
					{
						//std::cout << "ZIO DESTRA LINEA NERO: " << *node->value << std::endl;
						node = rule4_right(node);
					}
					//TRIANGOLO
					else
					{
						//std::cout << "ZIO DESTRA TRIANGOLO NERO: " << *node->value << std::endl;
						node = rule3_right(node);
					}
				}
				//ZIO SINISTRA
				else if (!node->father->father->left || (node->father->father->left->color == ft::BLACK && node->father->father->left != node->father))
				{
					//LINEA
					if (node->father->right && node == node->father->right)
					{
						//std::cout << "ZIO SINISTRA LINEA NERO: " << *node->value << std::endl;
						node = rule4_left(node);
					}
					//TRIANGOLO
					else
					{
						//std::cout << "ZIO SINISTRA TRIANGOLO NERO: " << *node->value << std::endl;
						node = rule3_left(node);
					}
				}	
			}
			else if (err == -3 && node == this->_root)
			{

				//std::cout << "FIGLI ROOT ROSSI: " << *node->value << std::endl;
				node->color = ft::BLACK;
				if (node->left && node->left->color == ft::BLACK)
					node->left->color = ft::RED;
				if (node->right && node->right->color == ft::BLACK)
					node->right->color = ft::RED;				
			}
			//std::cout<< "****************\n";
			//this->printTree();
			//std::cout<< "****************\n";
			//std::cin >> test;
		}
	}

	int isValid(void)
	{
		if (this->_size <= 1)
			return 1;
		ft::binaryTreeIterator<T> it = this->begin();
		int blackNodesStart = this->blackNodes(it._curr);
		if (this->_root->color == ft::RED)
			return -1;

		while (it != this->end())
		{
			if (it._curr->color == ft::RED && it._curr->father && it._curr->father->color == ft::RED)
				return -2;
			if (!it._curr->left && (!it._curr->right || it._curr->right == this->_end) && this->blackNodes(it._curr) != blackNodesStart)
				return -3;
			++it;
		}
		return 1;
	}

	int	blackNodes(value_type *node)
	{
		value_type *tmp = node;
		int n = 0;
		while (tmp->value != this->_root->value)
		{
			if (tmp->color == ft::BLACK)
				n++;
			tmp = tmp->father;
		}
		return n;
	}

	void leftRotation(value_type *x)
	{

		this->removeGhostNodes();
		if (!x->right)
			return ;
        if (x == _root)
        {
            _root->father = x->right;
            _root = x->right;
            _root->father->right = _root->left;
			if (_root->left &&  _root->left->father)
            	_root->left->father = _root->father;
            _root->left = _root->father;
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

	void rightRotation(value_type *x)
	{

		this->removeGhostNodes();
		if (!x->left)
			return ;
        if (x == _root)
        {
            _root->father = x->left;
            _root = x->left;
            _root->father->left = _root->right;
			if (_root->right &&  _root->right->father)
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
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
		tmp->right = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	binaryTreeIterator<T> rend(void)
	{
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		tmp->left = this->_begin;
		this->_begin->father = tmp;
		return binaryTreeIterator<T>(this->_begin);
	}

	/* NEW STAMPA */
	void printTree(void)
	{
    	printTreeRec(this->_root, nullptr, false);
	}

	struct Trunk
	{
		Trunk *prev;
		std::string str;
	
		Trunk(Trunk *prev, std::string str)
		{
			this->prev = prev;
			this->str = str;
		}
	};

	void showTrunks(Trunk *p)
	{
		if (p == nullptr) {
			return;
		}
		showTrunks(p->prev);
		std::cout << p->str;
	}
	
	void printTreeRec(value_type* root, Trunk *prev, bool isLeft)
	{
		if (root == 0)
		{ 
			return;
		}
		this->removeGhostNodes();
		std::string prev_str = "    ";
		Trunk *trunk = new Trunk(prev, prev_str);
		printTreeRec(root->right, trunk, true);
		if (!prev)
		{
			trunk->str = "———";
		}
		else if (isLeft)
		{
			trunk->str = ".———";
			prev_str = "   |";
		}
		else
		{
			trunk->str = "`———";
			prev->str = prev_str;
		}
		showTrunks(trunk);
		if (root->color == ft::RED)
			std::cout << BG_RED;
		else
			std::cout << BG_BLACK;
		std::cout << *root->value << OFF << std::endl;
		if (prev) {
			prev->str = prev_str;
		}
		trunk->str = "   |";
		printTreeRec(root->left, trunk, false);
	}

	void removeGhostNodes(void)
	{
		if (this->_end->father)
		{
			this->_end->father->right = 0;
			this->_end->father = 0;
		}
		//if (this->_begin->father)
		//{
		//	this->_begin->father->left = 0;
		//	this->_begin->father = 0;
		//}
	}
};

}