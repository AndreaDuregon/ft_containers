/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorMap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/31 19:12:10 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class Key, class Value>
    class mapIterator
    {
    protected:
    public:
        ft::binaryTreeIterator<ft::pair<Key, Value> > it;
        /* MEMBER */
        //typedef ???			iterator_category;
        typedef ft::pair<Key, Value>	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;
        mapIterator() {};
        mapIterator(TreeNode<value_type> *curr)
        {
            it = ft::binaryTreeIterator<value_type>(curr);
        };
        mapIterator(mapIterator const &copy)
        {
            *this = copy;
        }

        mapIterator &operator = (mapIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type			&operator * ()
        {
            return *this->it._curr->value;
        }

        mapIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        mapIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        mapIterator	operator-- ()
        {
            this->it.operator--();
            return *this;
        }

        mapIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type			*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(mapIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(mapIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(mapIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(mapIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(mapIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(mapIterator const &other) const {
            return (this->it >= other.it);
        }
};
}
