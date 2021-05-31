/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:35:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/31 17:53:33 by dmalori          ###   ########.fr       */
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
		typedef typename ft::mapIterator<Key, T >		const_iterator;
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

		map (map& x)
		{
			*this = x;
		}

		map& operator = (map& x)
		{
			_tree = ft::RBTree<value_type>();
			_comp = x._comp;
			_alloc = x._alloc;
			for (iterator i = x.begin(); i != x.end(); ++i)
				this->insert(value_type(*i.it.first, i->it.second));

			return *this;
		}

		~map (void)
		{
			if (this->_tree._size > 0)
				this->clear();
		}

     	iterator begin()
		{
			return iterator (this->_tree.begin()._curr);
		}

		const_iterator begin() const
		{
			return const_iterator (this->_tree.begin()._curr);
		}

		iterator end()
		{
			return iterator (this->_tree.end()._curr);
		}

		const_iterator end() const
		{
			return const_iterator (this->_tree.end()._curr);	
		}

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
			if (this->size() != 0 && this->find(val.first) != this->end())
				return ft::pair<iterator, bool>(this->find(val.first), false);
			ft::TreeNode<value_type> *v = new ft::TreeNode<value_type>(val);
			this->_tree.insert(*v);
			return ft::pair<iterator, bool>(this->find(val.first), true);
		}

		iterator insert (iterator position, const value_type& val)
		{
			//DELETE NODE
			(void) position;
			this->insert(val);
			return this->find(val.first);
		}

  		void insert (iterator first, iterator last)
		{
			while(first != last)
			{
				this->insert(*first.it._curr->value);
				++first;
			}
		}

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

		mapped_type& operator[] (const key_type& k)
		{
			if (this->size() != 0 && this->find(k) != this->end())
				return this->find(k).it._curr->value->second;
			this->insert(ft::pair<Key, T>(k, T()));
			return this->find(k).it._curr->value->second;
		}

		//void swap (map& x)
		//{
		//
		//}

		void clear()
		{
			iterator it = this->begin();
			while(it != this->end())
			{
				delete it.it._curr;
				this->_tree._size--;
				++it;
			}
		}

		key_compare key_comp() const
		{
			return this->_comp;
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
