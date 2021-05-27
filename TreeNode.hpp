//
// Created by Simone Giovo on 24/05/2021.
//

#pragma once
#include "Pair.hpp"

namespace ft
{
	enum Color {
		RED,
		BLACK
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


		TreeNode () : color(ft::RED), value(0), father(0), left(0), right(0) {}

		TreeNode (T node) : color(ft::RED), value(new value_type(node)), father(0), left(0), right(0) {}

		TreeNode &operator = (const TreeNode &other)
		{
			this->color = other.color;
			this->father = other.father;
			this->left = other.left;
			this->right = other.right;
			this->value = other.value;
			return (*this);
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
