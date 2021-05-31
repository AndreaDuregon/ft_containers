/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorMap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/31 14:28:21 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class T>
    class mapIterator
    {
    protected:
    public:
        ft::binaryTreeIterator<T> it;
        /* MEMBER */
        //typedef ???			iterator_category;
        typedef T				value_type;
        typedef std::ptrdiff_t 	difference_type;
        typedef value_type *	pointer;
        typedef value_type &	reference;
        mapIterator() {};
        mapIterator(TreeNode<T> *curr)
        {
            it = ft::binaryTreeIterator<T>(curr);
        };
        mapIterator(mapIterator const &copy)
        {
            *this = copy;
        }

        mapIterator<T> &operator = (mapIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        T			&operator * ()
        {
            return *this->it._curr->value;
        }

        mapIterator<T>	operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        mapIterator<T>	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        mapIterator<T>	operator-- ()
        {
            this->it.operator--();
            return *this;
        }

        mapIterator<T>	operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        T				*operator -> ()
        {
            return &this->it._curr->value;
        }

        bool operator==(mapIterator<T> const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(mapIterator<T> const &other) const {
            return (this->it != other.it);
        }

        bool operator<(mapIterator<T> const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(mapIterator<T> const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(mapIterator<T> const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(mapIterator<T> const &other) const {
            return (this->it >= other.it);
        }
};
}
