#pragma once

namespace ft
{
    template <typename T>
	struct Node
	{
		T		value;
		Node	*next;
		Node	*prev;
	};
}
