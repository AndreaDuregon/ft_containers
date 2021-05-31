/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorDeque.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:35 by forsili           #+#    #+#             */
/*   Updated: 2021/05/31 17:51:00 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


namespace ft
{
	template <class T> class DequeIterator
	{
	public:
		typedef T					value_type;
        typedef ft::list<T*>        pointer;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;

		ft::list<T*>		        _list;
		T*          		        _vector;
        ft::listIterator<T*>        _list_iterator;
        size_t                      _index_v;
        size_t                      _start;
        size_t                      _end;
	public:
		DequeIterator()	{};

		DequeIterator(DequeIterator const &copy)
		{
            this->_list = copy._list;
			this->_vector = copy._vector;
            this->_list_iterator = copy._list_iterator;
            this->_index_v = copy._index_v;
            this->_start = copy._start;
            this->_end = copy._end; 
		}

		reference	operator * ()
		{
			return (this->_vector[this->_index_v]);
		}

		DequeIterator	operator ++ ()
		{
            ft::listIterator<T*>    it(this->_list.end());
            it--;
			if (_index_v < 7 /* || (_list_iterator == it && _index_v == (_end % 8))*/)
                _index_v++;
            else /* if (!(_list_iterator == it && _index_v == (_end % 8))) */
            {
                _list_iterator++;
                _index_v = 0;
                _vector = this->_list_iterator._curr->value;
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
            
			if (_index_v > 0 /* || (_list_iterator == this->_list.begin() && _index_v == _start) */)
                _index_v--;
            else /* if (!(_list_iterator == this->_list.begin() && _index_v == _start)) */
            {
                _list_iterator--;
                _index_v = 7;
                _vector = this->_list_iterator._curr->value;
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
			return &(*this->_vector[_index_v]);
		}

		bool			operator == (DequeIterator const &other) const {
			return (this->_vector[_index_v] == other._vector[other._index_v]);
		}

		bool			operator != (DequeIterator const &other) const {
			return (this->_vector[_index_v] != other._vector[other._index_v]);
		}

		bool			operator < (DequeIterator const &other) const {
			return (this->_vector[_index_v] < other._vector[other._index_v]);
		}

		bool			operator <= (DequeIterator const &other) const {
			return (this->_vector[_index_v] <= other._vector[other._index_v]);
		}

		bool			operator > (DequeIterator const &other) const {
			return (this->_vector[_index_v] > other._vector[other._index_v]);
		}

		bool			operator >= (DequeIterator const &other) const {
			return (this->_vector[_index_v] >= other._vector[other._index_v]);
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
