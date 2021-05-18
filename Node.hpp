#pragma once

namespace ft
{
    template <typename T>
	class Node
	{
		public:
		T		value;
		Node	*next;
		Node	*prev;
		Node() {};
		Node(T val) : value(val) {};

		Node &operator=(Node const &other) {
			this->prev = other.prev;
			this->value = other.value;
			this->next = other.next;
			return (*this);
		}
	};
}
