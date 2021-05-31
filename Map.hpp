/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:35:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/31 14:59:58 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Pair.hpp"
#include "Less.hpp"
#include "IteratorMap.hpp"
#include "RBTree.hpp"

namespace ft
{
	template <class Key, class T, class Compare = ft::less<Key>, class Allocator = std::allocator<ft::pair<const Key, T> > > class map
	{
	public:
		ft::RBTree<ft::pair<Key, T> > _tree;
		Compare _comp;
		Allocator _alloc;
	public:
		typedef Key										key_type;
		typedef T										mapped_type;
		typedef ft::pair<Key, T>						value_type;
		typedef std::size_t								size_type;
		typedef std::ptrdiff_t							difference_type;
		typedef Compare									key_compare;
		typedef Allocator								allocator_type;
		typedef typename Allocator::reference			reference;
		typedef typename Allocator::const_reference		const_reference;
		typedef typename Allocator::pointer				pointer;
		typedef typename Allocator::const_pointer		const_pointer;
		typedef typename ft::mapIterator<Key, T >		iterator;
		//typedef typename ft::constMapIterator<T>		const_iterator;
		//typedef typename ft::reverseMapIterator<T>		reverse_iterator;
		//typedef typename ft::constReverseMapIterator<T>	const_reverse_iterator;
	
		explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
		{
			_tree = ft::RBTree<value_type>();
			_comp = comp;
			_alloc = alloc;
		}

		//map (iterator first, iterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
		//{
		//
		///}

		map (const map& x)
		{
			*this = x;
		}

		map& operator = (const map& x)
		{
			_tree = ft::RBTree<value_type>();
			_tree._begin = x._tree._begin;
			_tree._end = x._tree._end;
			_tree._root = x._tree._root;;
			_tree._size = x._tree._size;
			_comp = x._comp;
			_alloc = x._alloc;
			return *this;
		}

		~map (void)
		{

		}

     	iterator begin()
		{
			return iterator (this->_tree.begin()._curr);
		}

		//const_iterator begin() const
		//{
		//	
		//}

		iterator end()
		{
			return iterator (this->_tree.end()._curr);
		}

		//const_iterator end() const
		//{
		//	
		//}

		//reverse_iterator rbegin()
		//{
		//
		//}

		//const_reverse_iterator rbegin() const
		//{
		//	
		//}

		iterator find (const key_type& k)
		{
			iterator it(this->begin());
			while(it != this->end())
			{
				if (it->first == k)
					return it;
				++it;
			}
			return it;
		}

		//const_iterator find (const key_type& k) const
		//{
		//	
		//}

		ft::pair<iterator, bool> insert (const value_type& val)
		{
			ft::TreeNode<value_type> *v = new ft::TreeNode<value_type>(val);
			this->_tree.insert(*v);
			return ft::pair<iterator, bool>(iterator(), true);
		}

		//iterator insert (iterator position, const value_type& val)
		//{
		//	return iterator();
		//}

  		//void insert (iterator first, iterator last)
		//{
		//
		//}

		void erase (iterator position)
		{
		    if(!position.it->left && !position.it->right)
            {
		        if(position.it->father->right == position.it._curr)
		            position.it->father->right = 0;
		        else
		            position.it->father->left = 0;
				this->_tree._size--;
            }
		    else if (position.it->right && !position.it->left)
		    {
                if(position.it->father->right == position.it._curr)
                    position.it->father->right = position.it->right;
                else
                    position.it->father->left = position.it->right;
                position.it->right->father = position.it->father;
                delete(position.it._curr);
				this->_tree._size--;
		    }
		    else if (position.it->left && !position.it->right)
            {
                if(position.it->father->right == position.it._curr)
                    position.it->father->right = position.it->left;
                else
                    position.it->father->left = position.it->left;
                position.it->left->father = position.it->father;
                delete(position.it._curr);
				this->_tree._size--;
            }
		}

		//size_type erase (const key_type& k)
		//{
		//	return 0;
		//}

		//void erase (iterator first, iterator last)
		//{
		//
		//}

		bool empty() const
		{
			return this->_tree._size == 0;
		}

		size_type size() const
		{
			return this->_tree._size;
		}

		size_type max_size() const
		{
			return std::numeric_limits<size_type>::max() / (sizeof(value_type));
		}

		//mapped_type& operator[] (const key_type& k)
		//{
		//	return 0;
		//}

		//void swap (map& x)
		//{
		//
		//}

		void clear()
		{

		}

		key_compare key_comp() const
		{
			return 0;
		}

		//value_compare value_comp() const
		//{
		//
		//}

		//size_type count (const key_type& k) const
		//{
		//	return 0;
		//}

      	//iterator lower_bound (const key_type& k)
	  	//{
		//	  return iterator();
		//}

		//const_iterator lower_bound (const key_type& k) const
		//{
		//	
		//}

      	//iterator upper_bound (const key_type& k)
		//{
		//	return iterator();
		//}

		//const_iterator upper_bound (const key_type& k) const
		//{
		//	
		//}

		//pair<const_iterator,const_iterator> equal_range (const key_type& k) const
		//{
		//
		//}

		//ft::pair<iterator,iterator>             equal_range (const key_type& k)
		//{
		//	return ft::pair<iterator,iterator>( iterator(), iterator() );
		//}
		
		allocator_type get_allocator() const
		{
			return this->_alloc;
		}

	};
}
