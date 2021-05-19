/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:43:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/19 12:34:27 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

namespace ft
{
	template <class T> class VectorIterator
	{
	public:
		typedef T					value_type;
		typedef std::ptrdiff_t 		difference_type;
		typedef value_type *		pointer;
		typedef value_type const *	const_pointer;
		typedef value_type &		reference;
		typedef value_type const &	const_reference;
	protected:
		pointer		vec_p;
	public:
		VectorIterator()	{};
		VectorIterator(pointer p)
		{
			this->vec_p = p;
		}

		VectorIterator(VectorIterator const &copy)
		{
			this->vec_p = copy.vec_p;
		}

		reference	operator * ()
		{
			return (*this->vec_p);
		}

		reference	operator [] (size_t	n)
		{
			pointer	temp = this->vec_p;
			for (size_t i = 0; i < n; i++)
				temp++;
			return (*this->vec_p);
		}

		VectorIterator	&operator ++ ()
		{
			pointer	temp = this->vec_p;
			this->vec_p++;
			return temp;
		}
	
		VectorIterator	&operator ++ (int)
		{
			this->vec_p++;
			return this->vec_p;
		}
		
		VectorIterator	&operator -- ()
		{
			pointer	temp = this->vec_p;
			this->vec_p--;
			return temp;
		}

		VectorIterator	&operator -- (int)
		{
			this->vec_p--;
			return this->vec_p;
		}

		pointer			operator -> ()
		{
			return &(*this->vec_p);
		}

		bool operator==(VectorIterator const &other) const {
			return (this->vec_p == other.vec_p);
		}

		bool operator!=(VectorIterator const &other) const {
			return (this->vec_p != other.vec_p);
		}

		bool operator<(VectorIterator const &other) const {
			return (this->vec_p < other.vec_p);
		}

		bool operator<=(VectorIterator const &other) const {
			return (this->vec_p <= other.vec_p);
		}

		bool operator>(VectorIterator const &other) const {
			return (this->vec_p > other.vec_p);
		}

		bool operator>=(VectorIterator const &other) const {
			return (this->vec_p >= other.vec_p);
		}
	};

	template <class T> class constVectorIterator : public VectorIterator<T>
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

		const_reference		operator * ()
		{
			return (*this->vec_p);
		}

		const_reference	operator [] (size_t	n)
		{
			pointer	temp = this->vec_p;
			for (size_t i = 0; i < n; i++)
				temp++;
			return (*this->vec_p);
		}
		
		constVectorIterator	&operator ++ ()
		{
			pointer	temp = this->vec_p;
			this->vec_p++;
			return temp;
		}
	
		constVectorIterator	&operator ++ (int)
		{
			this->vec_p++;
			return this->vec_p;
		}
		
		constVectorIterator	&operator -- ()
		{
			pointer	temp = this->vec_p;
			this->vec_p--;
			return temp;
		}

		constVectorIterator	&operator -- (int)
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
	};
}	