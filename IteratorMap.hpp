/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorMap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/01 14:18:57 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class Key, class Value> class mapIterator
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

    template <class Key, class Value>
    class cmapIterator : public mapIterator<Key, Value>
    {
    protected:
    public:
        typedef ft::pair<Key, Value>	value_type;
        cmapIterator() {};
        cmapIterator(TreeNode<value_type> *curr) : mapIterator<Key, Value>(curr) {}
        cmapIterator(cmapIterator const &copy)
        {
            *this = copy;
        }

        value_type const    &operator * ()
        {
            return *this->it._curr->value;
        }

        value_type const    *operator -> ()
        {
            return this->it._curr->value;
        }

    };

    template <class Key, class Value> class reverseMapIterator : public mapIterator<Key, Value>
    {
    public:
        typedef ft::pair<Key, Value>	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;

        reverseMapIterator() {};
        reverseMapIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        reverseMapIterator(reverseMapIterator const &copy)
        {
            *this = copy;
        }

        reverseMapIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator--();
            return *this;
        }

        reverseMapIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator--(0);
            return *this;
        }

        reverseMapIterator	operator-- ()
        {
            this->it.operator++();
            return *this;
        }

        reverseMapIterator operator-- (int)
        {
            this->it.operator++(0);
            return *this;
        }
    };

    template <class Key, class Value> class constReverseMapIterator : public reverseMapIterator<Key, Value>
    {
    public:
        typedef ft::pair<Key, Value>	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;

        constReverseMapIterator() {};
        constReverseMapIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        constReverseMapIterator(constReverseMapIterator const &copy)
        {
            *this = copy;
        }

        value_type const		&operator * ()
        {
            return *this->it._curr->value;
        }

        value_type const		*operator -> ()
        {
            return this->it._curr->value;
        }

    };
}
