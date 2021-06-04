/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorMap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/04 15:05:01 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class Key, class Value> class mapIterator
    {
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
    public:
        typedef ft::pair<Key, Value>	value_type;
        cmapIterator() {};
        cmapIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        cmapIterator(cmapIterator const &copy)
        {
            *this = copy;
        }

        cmapIterator &operator = (cmapIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type		const	&operator * ()
        {
            return *this->it._curr->value;
        }

        cmapIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        cmapIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        cmapIterator	operator-- ()
        {
            this->it.operator--();
            return *this;
        }

        cmapIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type		const	*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(cmapIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(cmapIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(cmapIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(cmapIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(cmapIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(cmapIterator const &other) const {
            return (this->it >= other.it);
        }
    };

    template <class Key, class Value> class reverseMapIterator : public mapIterator<Key, Value>
    {
    public:
        typedef ft::pair<Key, Value>	value_type;
        reverseMapIterator() {};
        reverseMapIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        reverseMapIterator(reverseMapIterator const &copy)
        {
            *this = copy;
        }

        reverseMapIterator &operator = (reverseMapIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type		&operator * ()
        {
            return *this->it._curr->value;
        }

        reverseMapIterator operator++()
        {
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
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        reverseMapIterator operator-- (int)
        {
            this->it.operator++(0);
            return *this;
        }

        value_type		*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(reverseMapIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(reverseMapIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(reverseMapIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(reverseMapIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(reverseMapIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(reverseMapIterator const &other) const {
            return (this->it >= other.it);
        }
    };

    template <class Key, class Value> class constReverseMapIterator : public mapIterator<Key, Value>
    {
    public:
        typedef ft::pair<Key, Value>	value_type;
        constReverseMapIterator() {};
        constReverseMapIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        constReverseMapIterator(constReverseMapIterator const &copy)
        {
            *this = copy;
        }

        constReverseMapIterator &operator = (constReverseMapIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type	const	&operator * ()
        {
            return *this->it._curr->value;
        }

        constReverseMapIterator operator++()
        {
            this->it.operator--();
            return *this;
        }

        constReverseMapIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        constReverseMapIterator	operator-- ()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        constReverseMapIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type	const	*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(constReverseMapIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(constReverseMapIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(constReverseMapIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(constReverseMapIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(constReverseMapIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(constReverseMapIterator const &other) const {
            return (this->it >= other.it);
        }
    };
}
