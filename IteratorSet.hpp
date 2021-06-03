/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorSet.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/03 12:56:21 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class T> class setIterator
    {
    protected:
    public:
        ft::binaryTreeIterator<T> it;
        /* MEMBER */
        //typedef ???			iterator_category;
        typedef T                   	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;
        setIterator() {};
        setIterator(TreeNode<value_type> *curr)
        {
            it = ft::binaryTreeIterator<value_type>(curr);
        };

        setIterator(setIterator const &copy)
        {
            *this = copy;
        }

        setIterator &operator = (setIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type			&operator * ()
        {
            return *this->it._curr->value;
        }

        setIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        setIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        setIterator	operator-- ()
        {
            this->it.operator--();
            return *this;
        }

        setIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type			*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(setIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(setIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(setIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(setIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(setIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(setIterator const &other) const {
            return (this->it >= other.it);
        }
    };

    template <class T>
    class csetIterator : public setIterator<T>
    {
    protected:
    public:
        typedef T	value_type;
        csetIterator() {};
        csetIterator(TreeNode<value_type> *curr) : setIterator<value_type>(curr) {}
        csetIterator(csetIterator const &copy)
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

    template <class T> class reverseSetIterator : public setIterator<T>
    {
    public:
        typedef T	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;

        reverseSetIterator() {};
        reverseSetIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        reverseSetIterator(reverseSetIterator const &copy)
        {
            *this = copy;
        }

        reverseSetIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator--();
            return *this;
        }

        reverseSetIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator--(0);
            return *this;
        }

        reverseSetIterator	operator-- ()
        {
            this->it.operator++();
            return *this;
        }

        reverseSetIterator operator-- (int)
        {
            this->it.operator++(0);
            return *this;
        }
    };

    template <class T> class constReverseSetIterator : public reverseSetIterator<T>
    {
    public:
        typedef T	value_type;
        typedef std::ptrdiff_t 	        difference_type;
        typedef value_type *	        pointer;
        typedef value_type &	        reference;

        constReverseSetIterator() {};
        constReverseSetIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        constReverseSetIterator(constReverseSetIterator const &copy)
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
