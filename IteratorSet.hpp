/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorSet.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/04 15:18:50 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"
#include "IteratorBinaryTree.hpp"

namespace ft
{
    template <class T> class setIterator
    {
    public:
        ft::binaryTreeIterator<T> it;
        /* MEMBER */
        //typedef ???			iterator_category;
        typedef T	value_type;
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
    public:
        typedef T	value_type;
        csetIterator() {};
        csetIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        csetIterator(csetIterator const &copy)
        {
            *this = copy;
        }

        csetIterator &operator = (csetIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type		const	&operator * ()
        {
            return *this->it._curr->value;
        }

        csetIterator operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        csetIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        csetIterator	operator-- ()
        {
            this->it.operator--();
            return *this;
        }

        csetIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type		const	*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(csetIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(csetIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(csetIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(csetIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(csetIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(csetIterator const &other) const {
            return (this->it >= other.it);
        }
    };

    template <class T> class reverseSetIterator : public setIterator<T>
    {
    public:
        typedef T	value_type;
        reverseSetIterator() {};
        reverseSetIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        reverseSetIterator(reverseSetIterator const &copy)
        {
            *this = copy;
        }

        reverseSetIterator &operator = (reverseSetIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type		&operator * ()
        {
            return *this->it._curr->value;
        }

        reverseSetIterator operator++()
        {
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
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        reverseSetIterator operator-- (int)
        {
            this->it.operator++(0);
            return *this;
        }

        value_type		*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(reverseSetIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(reverseSetIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(reverseSetIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(reverseSetIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(reverseSetIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(reverseSetIterator const &other) const {
            return (this->it >= other.it);
        }
    };

    template <class T> class constReverseSetIterator : public setIterator<T>
    {
    public:
        typedef T	value_type;
        constReverseSetIterator() {};
        constReverseSetIterator(TreeNode<value_type> *curr)
        {
            this->it = ft::binaryTreeIterator<value_type>(curr);
        };

        constReverseSetIterator(constReverseSetIterator const &copy)
        {
            *this = copy;
        }

        constReverseSetIterator &operator = (constReverseSetIterator const &copy)
        {
            this->it = copy.it;
            return *this;
        }

        value_type	const	&operator * ()
        {
            return *this->it._curr->value;
        }

        constReverseSetIterator operator++()
        {
            this->it.operator--();
            return *this;
        }

        constReverseSetIterator	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            this->it.operator++(0);
            return *this;
        }

        constReverseSetIterator	operator-- ()
        {
            //std::cout << "PREEEE" << std::endl;
            this->it.operator++();
            return *this;
        }

        constReverseSetIterator operator-- (int)
        {
            this->it.operator--(0);
            return *this;
        }

        value_type	const	*operator -> ()
        {
            return this->it._curr->value;
        }

        bool operator==(constReverseSetIterator const &other) const {
            return (this->it == other.it);
        }

        bool operator!=(constReverseSetIterator const &other) const {
            return (this->it != other.it);
        }

        bool operator<(constReverseSetIterator const &other) const {
            return (this->it < other.it);
        }

        bool operator<=(constReverseSetIterator const &other) const {
            return (this->it <= other.it);
        }

        bool operator>(constReverseSetIterator const &other) const {
            return (this->it > other.it);
        }

        bool operator>=(constReverseSetIterator const &other) const {
            return (this->it >= other.it);
        }
    };
}
