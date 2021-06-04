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
    typedef ft::binaryTreeIterator<T> iterator;
	mutable value_type *_root;
	mutable size_type _size;
	mutable value_type *_end;
	mutable value_type *_begin;

	RBTree() : _root(0), _size(0), _end(new value_type()), _begin(0)
	{
		this->_end->father = 0;
	}

	RBTree(RBTree const &other) : _root(0), _size(0), _end(new value_type()), _begin(0)
	{
		this->_end->father = 0;
		*this = other;
	}

	RBTree &operator = (const RBTree &other)
	{
		other.removeGhostNodes();
		this->clear(this->_root);
		this->copyTree(this->_root, 0, other._root);
		this->_size = other._size;
		return *this;
	}

	void copyTree (value_type*& copiedTreeRoot, value_type* newParent, value_type* otherTreeRoot)
	{
		if (otherTreeRoot == 0)
			copiedTreeRoot = 0;
		else {
			copiedTreeRoot = new value_type;
			*copiedTreeRoot->value = *otherTreeRoot->value;
			copiedTreeRoot->color = otherTreeRoot->color;
			copiedTreeRoot->father = newParent;

			copyTree(copiedTreeRoot->left, copiedTreeRoot, otherTreeRoot->left);
			copyTree(copiedTreeRoot->right, copiedTreeRoot, otherTreeRoot->right);
		}
	}

	~RBTree()
    {
		if (this->_size)
		{
	    	this->clear(this->_root);
		}
		delete this->_end;
	}

	void                    clear(TreeNode<T> *curr)
	{
	    this->removeGhostNodes();
	    if (!curr)
	        return ;
	    if (curr->left || curr->right)
	    {
	        if (curr->right)
	            clear(curr->right);
	        if (curr->left)
	            clear(curr->left);
	    }
	    if (curr)
        {
	        this->_size--;
	        delete curr;
        }
	}


	value_type              &insert (value_type &newNode)
	{
		this->removeGhostNodes();
		if (this->_root)
		{
			size_type newDeep = 1;
			value_type *tmp = this->_root;
			while(true)
			{
				//if (*newNode.value == *tmp->value)
				//	return *tmp;
				if (*newNode.value >= *tmp->value && tmp->right)
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
			if (*newNode.value >= *tmp->value)
				tmp->right = &newNode;
			else
				tmp->left = &newNode;
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
		}
		return newNode;
	}

	//Il nodo inserito è la root - rule1
	value_type              *rule1(value_type *node)
	{
		node->color = ft::BLACK;
		return node;
	}

	//Lo zio del nodo è rosso - rule2 LEFT
	value_type              *rule2_left(value_type *node)
	{
		node->father->father->color = ft::RED;
		node->father->father->left->color = ft::BLACK;
		node->father->color = ft::BLACK;
		return node->father->father;
	}

	//Lo zio del nodo è rosso - rule2 RIGHT
	value_type              *rule2_right (value_type *node)
	{
		node->father->father->color = ft::RED;
		node->father->father->right->color = ft::BLACK;
		node->father->color = ft::BLACK;
		return node->father->father;
	}

	//Lo zio è nero (TRIANGOLO) - rule3 DESTRA
	value_type              *rule3_right(value_type *node)
	{
		this->leftRotation(node->father);
		return node->left;
	}

	//Lo zio è nero (TRIANGOLO) - rule3 SINISTRA
	value_type              *rule3_left(value_type *node)
	{
		this->rightRotation(node->father);
		return node->right;
	}

	//Lo zio è nero (LINEA) - rule4 SINISTRA
	value_type              *rule4_left (value_type *node)
	{
		if (node->color == ft::RED && node->father->color == ft::RED)
			node->color = ft::BLACK;
		this->leftRotation(node->father->father);	
		return node->father;
	}

	//Lo zio è nero (LINEA) - rule4 DESTRA
	value_type              *rule4_right (value_type *node)
	{
		if (node->color == ft::RED && node->father->color == ft::RED)
			node->color = ft::BLACK;
		this->rightRotation(node->father->father);
		return node->father;
	}

	void                    fixTree(value_type *node)
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

	int                     isValid(void)
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

    int	                    blackNodes(value_type *node)
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

	void                    leftRotation(value_type *x)
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

	void                    rightRotation(value_type *x)
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

    void                    swapColors(TreeNode<T> *x1, TreeNode<T> *x2)
    {
        ft::Color temp;
        temp = x1->color;
        x1->color = x2->color;
        x2->color = temp;
    }

    void                    swapValues(TreeNode<T> *u, TreeNode<T> *v)
    {
	    T *tmp;
	    tmp = u->value;
	    u->value = v->value;
	    v->value = tmp;

    }

    void                    fixRedRed(TreeNode<T> *x)
    {
        if (x == _root) {
            x->color = BLACK;
            return;
        }
        TreeNode<T> *parent = x->father, *grandparent = x->father->father,
                *uncle = x->uncle();

        if (parent->color != BLACK)
        {
            if (uncle != NULL && uncle->color == RED)
            {
                parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                fixRedRed(grandparent);
            } else {
                if (parent->isOnLeft())
                {
                    if (x->isOnLeft())
                    {
                        swapColors(parent, grandparent);
                    }
                    else
                    {
                        leftRotate(parent);
                        swapColors(x, grandparent);
                    }
                    rightRotate(grandparent);
                }
                else
                {
                    if (x->isOnLeft())
                    {
                        rightRotate(parent);
                        swapColors(x, grandparent);
                    }
                    else
                    {
                        swapColors(parent, grandparent);
                    }
                    leftRotate(grandparent);
                }
            }
        }
    }

    TreeNode<T>             *successor(TreeNode<T> *x) {
        TreeNode<T> *temp = x;

        while (temp->left != NULL)
            temp = temp->left;
        return temp;
    }

    TreeNode<T>             *replace(TreeNode<T> *x) {
        if (x->left != NULL and x->right != NULL)
            return successor(x->right);
        if (x->left == NULL and x->right == NULL)
            return NULL;
        if (x->left != NULL)
            return x->left;
        else
            return x->right;
    }

    void                    delOne(TreeNode<T> *v)
    {
        this->_size--;
        delete v;
        this->_root = NULL;
    }
    void                    delTwo(TreeNode<T> *v)
    {
        (void) v;
        if (v == this->_root)
        {
            if (v->left)
            {
                this->_root = v->left;
                v->left->father = NULL;
                this->_size--;
                delete v;
            }
            else
            {
                this->_root = v->right;
                v->right->father = NULL;
                this->_size--;
                delete v;
            }
        }
        else
        {
            if(v->isOnLeft())
            {
                this->_root->left = NULL;
                this->_size--;
                delete v;
            }
            else
            {
                this->_root->right = NULL;
                this->_size--;
                delete v;
            }
        }
    }

    void                    deleteNode(TreeNode<T> *v)
    {
		if (this->_size == 2)
		{
		    delTwo(v);
		    return;
		}
		if(this->_size == 1)
        {
            delOne(v);
            return;
        }
		if(!this->_size)
		    return;
		this->removeGhostNodes();
        TreeNode<T> *u = replace(v);
        bool uvBlack = ((u == NULL or u->color == BLACK) and (v->color == BLACK));
        TreeNode<T> *parent = v->father;
        if (u == NULL)
        {
            if (v == _root)
                _root = NULL;
            else
            {
                if (uvBlack)
                    fixDoubleBlack(v);
                else
                    if (v->sibling() != NULL)
                        v->sibling()->color = RED;
                if (v->isOnLeft())
                    parent->left = NULL;
                else
                    parent->right = NULL;
            }
            //delete v->value;
            delete v;
            this->_size--;
            return;
        }
        if (v->left == NULL or v->right == NULL)
        {
            if (v == _root)
            {
                v->value = u->value;
                v->left = v->right = NULL;
                this->_size--;
                //delete u->value;
                delete u;
            }
            else
            {
                if (v->isOnLeft())
                    parent->left = u;
                else
                    parent->right = u;
                this->_size--;
                //delete v->value;
                delete v;
                u->father = parent;
                if (uvBlack)
                    fixDoubleBlack(u);
                else
                    u->color = BLACK;
            }
            return;
        }
        swapValues(u, v);
        deleteNode(u);
    }

    void                    fixDoubleBlack(TreeNode<T> *x)
    {
        if (x == _root)
            return;
        TreeNode<T> *sibling = x->sibling(), *parent = x->father;
        if (sibling == NULL)
        {
            fixDoubleBlack(parent);
        }
        else
        {
            if (sibling->color == RED)
            {
                parent->color = RED;
                sibling->color = BLACK;
                if (sibling->isOnLeft())
                    this->rightRotation(parent);
                else
                    this->leftRotation(parent);
                fixDoubleBlack(x);
            }
            else
            {
                if (sibling->hasRedChild()) {
                    if (sibling->left != NULL and sibling->left->color == RED) {
                        if (sibling->isOnLeft()) {
                            sibling->left->color = sibling->color;
                            sibling->color = parent->color;
                            this->rightRotation(parent);
                        }
                        else
                        {
                            sibling->left->color = parent->color;
                            this->rightRotation(sibling);
                            this->leftRotation(parent);
                        }
                    }
                    else
                    {
                        if (sibling->isOnLeft()) {
                            sibling->right->color = parent->color;
                            this->leftRotation(sibling);
                            this->rightRotation(parent);
                        }
                        else
                        {
                            sibling->right->color = sibling->color;
                            sibling->color = parent->color;
                            this->leftRotation(parent);
                        }
                    }
                    parent->color = BLACK;
                }
                else
                {
                    sibling->color = RED;
                    if (parent->color == BLACK)
                        fixDoubleBlack(parent);
                    else
                        parent->color = BLACK;
                }
            }
        }
    }


    binaryTreeIterator<T>   begin(void)
	{
		//this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		this->_begin = tmp;
		return binaryTreeIterator<T>(tmp);
	}

    binaryTreeIterator<T>   begin(void) const
	{
		//this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		this->_begin = tmp;
		return binaryTreeIterator<T>(tmp);
	}

	binaryTreeIterator<T>   rbegin(void)
	{
		//this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->right->right)
			tmp = tmp->right;
		return binaryTreeIterator<T>(tmp);
	}

	binaryTreeIterator<T>   rbegin(void) const
	{
		//this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->right->right)
			tmp = tmp->right;
		return binaryTreeIterator<T>(tmp);
	}

	binaryTreeIterator<T>   end(void)
	{
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
		tmp->right = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	binaryTreeIterator<T>   end(void) const
	{
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->right)
			tmp = tmp->right;
		tmp->right = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	binaryTreeIterator<T>   rend(void)
	{
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		tmp->left = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	binaryTreeIterator<T>   rend(void) const
	{
		this->removeGhostNodes();
		value_type *tmp = this->_root;
		while(tmp->left)
			tmp = tmp->left;
		tmp->left = this->_end;
		this->_end->father = tmp;
		return binaryTreeIterator<T>(this->_end);
	}

	/* NEW STAMPA */
	void                    printTree(void)
	{
    	printTreeRec(this->_root, 0, false);
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

	void                    showTrunks(Trunk *p)
	{
		if (p == 0) {
			return;
		}
		showTrunks(p->prev);
		std::cout << p->str;
	}
	
	void                    printTreeRec(value_type* root, Trunk *prev, bool isLeft)
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
		delete trunk;
	}

	void                    removeGhostNodes(void)
	{
		if (this->_end->father)
		{
			if (this->_end->father->right == this->_end)
				this->_end->father->right = 0;
			else
				this->_end->father->left = 0;
			this->_end->father = 0;
		}
	}
	void                    removeGhostNodes(void) const
	{
		if (this->_end->father)
		{
			if (this->_end->father->right == this->_end)
				this->_end->father->right = 0;
			else
				this->_end->father->left = 0;
			this->_end->father = 0;
		}
	}
};

}
