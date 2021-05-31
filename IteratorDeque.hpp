/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorDeque.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:35 by forsili           #+#    #+#             */
/*   Updated: 2021/06/01 00:23:10 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


namespace ft
{
	template <class T> class DequeIterator
	{
	public:
		typedef T					value_type;
        typedef ft::list<ft::vector<T> >        pointer;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;

		pointer		        _list;
        ft::listIterator<ft::vector<T> >    _list_iterator;
        ft::VectorIterator<T>               _vector_iterator;
        size_t                      _start;
        size_t                      _end;
	public:
		DequeIterator()	{};

		DequeIterator(DequeIterator const &copy)
		{
            this->_end = copy._end;
			this->_start = copy._start;
			this->_list = copy._list;
			this->_list_iterator = copy._list_iterator;
			this->_vector_iterator = copy._vector_iterator;
		}

		reference	operator * ()
		{
			return (*this->_vector_iterator);
		}

 		DequeIterator	operator ++ ()
		{
			ft::VectorIterator<T> it(_list_iterator._curr->value.end());
			it--;
            if (_vector_iterator != it)
				_vector_iterator++;
			else
			{
				_list_iterator++;
				_vector_iterator = _list_iterator._curr->value.begin();
			}
			return *this;
		}
	
		DequeIterator	operator ++ (int)
		{
			DequeIterator<T>	temp(*this);
			this->operator++();
			return temp;
		}
		
		DequeIterator	operator -- ()
		{
			ft::VectorIterator<T>	end;
            if (_vector_iterator > _list_iterator._curr->value.begin())
				_vector_iterator--;
			else
			{
				_list_iterator--;
				end = _list_iterator._curr->value.end();
				end--;
				_vector_iterator = end;
			}
			return *this;
		}

		DequeIterator	operator -- (int)
		{
			DequeIterator<T>	temp(*this);
			this->operator--();
			return temp;
		}

		pointer			operator -> ()
		{
			return &(*this);
		}

		bool			operator == (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p == other._vector_iterator.vec_p);
		}

		bool			operator != (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p != other._vector_iterator.vec_p);
		}

		bool			operator < (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p < other._vector_iterator.vec_p);
		}

		bool			operator <= (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p <= other._vector_iterator.vec_p);
		}

		bool			operator > (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p > other._vector_iterator.vec_p);
		}

		bool			operator >= (DequeIterator const &other) const {
			return (this->_vector_iterator.vec_p >= other._vector_iterator.vec_p);
		} 
	};

/* 	template <class T> class constVectorIterator : public VectorIterator<T>
	{
	public:
		typedef T					value_type;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type *		pointer;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;

		constVectorIterator()	{};
		constVectorIterator(pointer p) : VectorIterator<T>(p)	{}
		constVectorIterator(constVectorIterator const &copy) : VectorIterator<T>(copy)	{}

		const_reference			operator * ()
		{
			return (*this->vec_p);
		}

		constVectorIterator		&operator ++ ()
		{
			pointer	temp = this->vec_p;
			this->vec_p++;
			return temp;
		}
	
		constVectorIterator		&operator ++ (int)
		{
			this->vec_p++;
			return this->vec_p;
		}
		
		constVectorIterator		&operator -- ()
		{
			pointer	temp = this->vec_p;
			this->vec_p--;
			return temp;
		}

		constVectorIterator		&operator -- (int)
		{
			this->vec_p--;
			return this->vec_p;
		}

		const_pointer			operator -> ()
		{
			return &(*this->vec_p);
		}
	};

	template <class T> class reverseVectorIterator : public VectorIterator<T>
	{
	public:
		typedef T					value_type;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type *		pointer;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;

		reverseVectorIterator()	{};
		reverseVectorIterator(pointer p) : VectorIterator<T>(p)	{}
		reverseVectorIterator(reverseVectorIterator const &copy) : VectorIterator<T>(copy)	{}

		reverseVectorIterator	&operator ++ ()
		{
			pointer	temp = this->vec_p;
			this->vec_p--;
			return temp;
		}
	
		reverseVectorIterator	&operator ++ (int)
		{
			this->vec_p--;
			return this->vec_p;
		}
		
		reverseVectorIterator	&operator -- ()
		{
			pointer	temp = this->vec_p;
			this->vec_p++;
			return temp;
		}

		reverseVectorIterator	&operator -- (int)
		{
			this->vec_p++;
			return this->vec_p;
		}
	};

	template <class T> class constReverseVectorIterator : public VectorIterator<T>
	{
	public:
		typedef T					value_type;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type *		pointer;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;

		constReverseVectorIterator()	{};
		constReverseVectorIterator(pointer p) : VectorIterator<T>(p)	{}
		constReverseVectorIterator(constReverseVectorIterator const &copy) : VectorIterator<T>(copy)	{}

		constReverseVectorIterator	&operator ++ ()
		{
			pointer	temp = this->vec_p;
			this->vec_p--;
			return temp;
		}
	
		constReverseVectorIterator	&operator ++ (int)
		{
			this->vec_p--;
			return this->vec_p;
		}
		
		constReverseVectorIterator	&operator -- ()
		{
			pointer	temp = this->vec_p;
			this->vec_p++;
			return temp;
		}

		constReverseVectorIterator	&operator -- (int)
		{
			this->vec_p++;
			return this->vec_p;
		}
	}; */
}
