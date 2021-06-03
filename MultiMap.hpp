/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Multimap.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:35:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/03 16:57:31 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include "Pair.hpp"
#include "Less.hpp"
#include "IteratorMap.hpp"
#include "RBTree.hpp"

namespace ft
{
	template <class Key, class T, class Compare = ft::less<Key>, class Allocator = std::allocator<ft::pair<const Key, T> > > class multimap
	{
	public:
		ft::RBTree<ft::pair<Key, T> > _tree;
		Compare _comp;
		Allocator _alloc;

	public:
		typedef Key												key_type;
		typedef T												mapped_type;
		typedef ft::pair<Key, T>								value_type;
		typedef std::size_t										size_type;
		typedef std::ptrdiff_t									difference_type;
		typedef Compare											key_compare;
		typedef Allocator										allocator_type;
		typedef typename Allocator::reference					reference;
		typedef typename Allocator::const_reference				const_reference;
		typedef typename Allocator::pointer						pointer;
		typedef typename Allocator::const_pointer				const_pointer;
		typedef typename ft::mapIterator<Key, T >				iterator;
		typedef typename ft::reverseMapIterator<Key, T>			reverse_iterator;
		typedef typename ft::cmapIterator<Key, T >				const_iterator;
		typedef typename ft::constReverseMapIterator<Key, T>	const_reverse_iterator;

		// CLASSE PER LA RESTITUZIONE DI UN COMPARATORE SPECIFICO PER value_comp()
		class value_compare : public ft::pair<Key, T>
		{   
			friend class multimap;
			protected:
			Compare comp;
			value_compare (Compare c) : comp(c) {}
			public:
			typedef ft::pair<Key, T>	value_type;
			typedef bool 				result_type;
			typedef value_type			first_argument_type;
			typedef value_type			second_argument_type;

			bool operator() (const value_type& x, const value_type& y) const
			{
				return comp(x.first, y.first);
			}
		};

		//ok
		explicit multimap (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) : _tree(ft::RBTree<value_type>()), _comp(comp), _alloc(alloc) {}

		//ok
		multimap (iterator first, iterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) : _tree(ft::RBTree<value_type>()), _comp(comp), _alloc(alloc)
		{
			this->insert(first,last);
		}
	
		//ok
		multimap (const multimap& x) : _tree(ft::RBTree<value_type>()), _comp(x._comp), _alloc(x._alloc)
		{
			*this = x;
		}
		//ok
		multimap& operator = (const multimap& x)
		{
			this->_tree = x._tree;
			this->_comp = x._comp;
			this->_alloc = x._alloc;
			return *this;
		}
		//ok
		~multimap (void)
		{
		    if (this->_tree._size)
		        this->clear();
		}
		//ok
     	iterator begin()
		{
			return iterator (this->_tree.begin()._curr);
		}
		//ok
		const_iterator begin() const
		{
			return const_iterator (this->_tree.begin()._curr);
		}
		//ok
		iterator end()
		{
			return iterator (this->_tree.end()._curr);
		}
		//ok
		const_iterator end() const
		{
			return const_iterator(this->_tree.end()._curr);	
		}

		reverse_iterator rbegin()
		{
			return reverse_iterator (this->_tree.rbegin()._curr);
		}

		reverse_iterator rend()
		{
			return reverse_iterator (this->_tree.rend()._curr);
		}

		const_reverse_iterator rbegin() const
		{
			return reverse_iterator (this->_tree.rbegin()._curr);
		}

		const_reverse_iterator rend() const
		{
			return reverse_iterator (this->_tree.rend()._curr);
		}
		//ok
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
		//ok
		const_iterator find (const key_type& k) const
		{
			const_iterator it(this->begin());
			while(it != this->end())
			{
				if (it->first == k)
					return it;
				++it;
			}
			return it;		
		}
		//ok
		iterator insert (const value_type& val)
		{
			ft::TreeNode<value_type> *v = new ft::TreeNode<value_type>(val);
			this->_tree.insert(*v);
			return this->find(val.first);
		}
		//ok
		iterator insert (iterator position, const value_type& val)
		{
			//DELETE NODE ?
			(void) position;
			this->insert(val);
			return this->find(val.first);
		}
		//ok
  		void insert (iterator first, iterator last)
		{
			while(first != last)
			{
				this->insert(*first.it._curr->value);
				++first;
			}
		}
		//ok
		void erase (iterator position)
		{
		    this->_tree.deleteNode(position.it._curr);
		}
		//ok
		size_type erase (const key_type& k)
		{
		    size_type i = 0;
		    iterator it(this->begin());
            while (1)
            {
            	it = this->find(k);
				if(it != this->end())
				{
					this->_tree.deleteNode(it.it._curr);
					i++;
				}
				else
					return i;
            }
		}
		//ok
		void erase (iterator first, iterator last)
		{
			ft::vector<Key> vals;
			while(first != last)
			{
				vals.push_back(first.it._curr->value->first);
				first++;
			}
			for (size_t i = 0; i < vals.size(); i++)
			{
				this->erase(this->find(vals[i]));
			}
		}
		//ok
		bool empty() const
		{
			return this->_tree._size == 0;
		}
		//ok
		size_type size() const
		{
			return this->_tree._size;
		}
		//ok
		size_type max_size() const
		{
			return std::numeric_limits<size_type>::max() / (sizeof(value_type));
		}
		//ok
		void swap (multimap& x)
		{
			ft::RBTree<ft::pair<Key, T> > tmp = this->_tree;
			this->_tree = x._tree;
			x._tree = tmp;
			Compare tmp_c = this->_comp;
			this->_comp = x._comp;
			x._comp = tmp_c;
			Allocator tmp_a = this->_alloc;
			this->_alloc = x._alloc;
			x._alloc = tmp_a;
		}
		//ok
		void clear()
		{
			this->_tree.clear(this->_tree._root);
		}
		//ok
		size_type count (const key_type& k) const
		{
			iterator it = this->begin();
			while (it != this->end())
			{
				if (it->first == k)
					return 1;
				++it;
			}
			return 0;
		}
		//ok
      	iterator lower_bound (const key_type& k)
	  	{
			iterator it = this->begin();
			while (it != this->end())
			{
				if (it->first >= k)
					return it;
				++it;
			}
			return it;
		}

		const_iterator lower_bound (const key_type& k) const
		{
			const_iterator it = this->begin();
			while (it != this->end())
			{
				if (it->first >= k)
					return it;
				++it;
			}
			return it;
		}
		//ok
      	iterator upper_bound (const key_type& k)
		{
			iterator it = this->begin();
			while (it != this->end())
			{
				if (it->first > k)
					return it;
				++it;
			}
			return it;
		}

		const_iterator upper_bound (const key_type& k) const
		{
			const_iterator it = this->begin();
			while (it != this->end())
			{
				if (it->first > k)
					return it;
				++it;
			}
			return it;
		}

		ft::pair<const_iterator,const_iterator>	equal_range (const key_type& k) const
		{
			const_iterator it1 = this->lower_bound(k);
			const_iterator it2 = this->upper_bound(k);
			pair<const_iterator,const_iterator> ret;
			ret.first = it1;
			ret.second = it2;
			return ret;
		}
		//ok
		ft::pair<iterator,iterator>			equal_range (const key_type& k)
		{
			iterator it1 = this->lower_bound(k);
			iterator it2 = this->upper_bound(k);
			pair<iterator,iterator> ret;
			ret.first = it1;
			ret.second = it2;
			return ret;
		}
		//ok
		key_compare key_comp() const
		{
			Compare cmp(this->_comp);
			return cmp;
		}
		//ok
		value_compare value_comp() const
		{
			return value_compare(this->key_comp());
		}
		//ok
		allocator_type get_allocator() const
		{
			return this->_alloc;
		}

		//ok
		template <class k, class v, class c, class a>
		friend bool operator == (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			if (lhs.size() != rhs.size())
				return false;
			for (ft::mapIterator<Key, T> it = lhs.begin(), it2 = rhs.begin(); it != lhs.end(); ++it, ++it2)
				if (it->first != it2->first || it->second != it2->second)
					return false;
			return true;
		}
		//ok
		template <class k, class v, class c, class a>
		friend bool operator != (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			return !(lhs == rhs);
		}
		//ok
		template <class k, class v, class c, class a>
		friend bool operator < (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			for (ft::mapIterator<Key, T> it = lhs.begin(), it2 = rhs.begin(); it != lhs.end(); ++it, ++it2)
			{
				if (it->first != it2->first || it->second != it2->second)
				{
					if (it->first < it2->first)
						return true;
					else
						return false;
				}
			}
			return false;
		}
		//ok
		template <class k, class v, class c, class a>
		friend bool operator <= (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			for (ft::mapIterator<Key, T> it = lhs.begin(), it2 = rhs.begin(); it != lhs.end(); ++it, ++it2)
			{
				if (it->first != it2->first || it->second != it2->second)
				{
					if (it->first < it2->first)
						return true;
					else
						return false;
				}
			}
			return true;
		}
		//ok
		template <class k, class v, class c, class a>
		friend bool operator > (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			for (ft::mapIterator<Key, T> it = lhs.begin(), it2 = rhs.begin(); it != lhs.end(); ++it, ++it2)
			{
				if (it->first != it2->first || it->second != it2->second)
				{
					if (it->first > it2->first)
						return true;
					else
						return false;
				}
			}
			return false;
		}
		//ok
		template <class k, class v, class c, class a>
		friend bool operator >= (const ft::multimap<k,v,c,a>& lhs, const ft::multimap<k,v,c,a>& rhs)
		{
			for (ft::mapIterator<Key, T> it = lhs.begin(), it2 = rhs.begin(); it != lhs.end(); ++it, ++it2)
			{
				if (it->first != it2->first || it->second != it2->second)
				{
					if (it->first > it2->first)
						return true;
					else
						return false;
				}
			}
			return true;
		}
	};
}
