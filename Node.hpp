#pragma once

namespace ft
{
    template <typename T>
	struct Node
	{
		T		value;
		Node	*next;
		Node	*prev;
		Node() {};
		Node(T val) : value(val) {};
		~Node() {};

		Node &operator=(Node const &other) {
			this->prev = other.prev;
			this->value = other.value;
			this->next = other.next;
			return (*this);
		}
	};
}
