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

	template < class Key, class Value>
	struct TreeNode
	{
		typedef ft::pair<Key, Value>			value_type;
		typedef ft::TreeNode<Key, Value>		node_type;

		ft::Color								color;
		value_type								*value;
		node_type								*father;
		node_type								*left;
		node_type								*right;


		TreeNode () : color(ft::RED), value(new value_type()), father(0), left(0), right(0) {}

		TreeNode (Key key, Value value) : color(ft::RED), value(new value_type(key, value)), father(0), left(0), right(0) {}

		//TreeNode (const TreeNode &other) : color(other.color), value(other.value), father(other.father), left(other.left), right(other.right) {}

		void setValue(Value val)
		{
			this->value->second = val;
		}

		TreeNode &operator = (const TreeNode &other)
		{
			this->color = other.color;
			this->father = other.father;
			this->left = other.left;
			this->right = other.right;
			this->value = other.value;
			return (*this);
		} 
	};
}
