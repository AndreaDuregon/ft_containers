/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorMap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:18:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/24 10:18:32 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TreeNode.hpp"

namespace ft
{
    template <class Tp>
    class mapIterator
    {
    protected:
    public:
        TreeNode<Tp>	*_curr;
        /* MEMBER */
        //typedef ???			iterator_category;
        typedef Tp				value_type;
        typedef std::ptrdiff_t 	difference_type;
        typedef value_type *	pointer;
        typedef value_type &	reference;
        mapIterator() {};
        mapIterator(TreeNode<Tp> *curr) : _curr(curr) {};
        mapIterator(mapIterator const &copy)
        {
            *this = copy;
        }

        mapIterator<Tp> &operator = (mapIterator const &copy)
        {
            this->_curr = copy._curr;
            return *this;
        }

        Tp			&operator * ()
        {
            return this->_curr->value;
        }

        mapIterator<Tp>	operator++()
        {
            //std::cout << "PREEEE" << std::endl;
            this->_curr = this->_curr->next;
            return *this;
        }

        mapIterator<Tp>	operator++ (int)
        {
            //std::cout << "POST" << std::endl;
            mapIterator<Tp> it(this->_curr);
            this->operator++();
            return it;
        }

        mapIterator<Tp>	operator-- ()
        {
            this->_curr = this->_curr->prev;
            return *this;
        }

        mapIterator<Tp>	operator-- (int)
        {
            mapIterator<Tp> temp(this->_curr);
            this->operator--();
            return temp;
        }

        Tp				*operator -> ()
        {
            return &this->_curr->value;
        }

        bool operator==(mapIterator<Tp> const &other) const {
            return (this->_curr == other._curr);
        }

        bool operator!=(mapIterator<Tp> const &other) const {
            return (this->_curr != other._curr);
        }

        bool operator<(mapIterator<Tp> const &other) const {
            return (this->_curr < other._curr);
        }

        bool operator<=(mapIterator<Tp> const &other) const {
            return (this->_curr <= other._curr);
        }

        bool operator>(mapIterator<Tp> const &other) const {
            return (this->_curr > other._curr);
        }

        bool operator>=(mapIterator<Tp> const &other) const {
            return (this->_curr >= other._curr);
        }
}