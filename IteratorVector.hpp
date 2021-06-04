/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IteratorVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:43:44 by aduregon          #+#    #+#             */
/*   Updated: 2021/06/04 14:49:01 by dmalori          ###   ########.fr       */
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
		pointer		vec_p;

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

		VectorIterator	operator ++ ()
		{
			this->vec_p++;
			return *this;
		}
	
		VectorIterator	operator ++ (int)
		{
			VectorIterator<T>	temp(this->vec_p);
			this->vec_p++;
			return temp;
		}
		
		VectorIterator	operator -- ()
		{
			this->vec_p--;
			return *this;
		}

		VectorIterator	operator -- (int)
		{
			VectorIterator<T>	temp(this->vec_p);
			this->vec_p--;
			return temp;
		}

		pointer			operator -> ()
		{
			return &(*this->vec_p);
		}

		bool			operator == (VectorIterator const &other) const {
			return (this->vec_p == other.vec_p);
		}

		bool			operator != (VectorIterator const &other) const {
			return (this->vec_p != other.vec_p);
		}

		bool			operator < (VectorIterator const &other) const {
			return (this->vec_p < other.vec_p);
		}

		bool			operator <= (VectorIterator const &other) const {
			return (this->vec_p <= other.vec_p);
		}

		bool			operator > (VectorIterator const &other) const {
			return (this->vec_p > other.vec_p);
		}

		bool			operator >= (VectorIterator const &other) const {
			return (this->vec_p >= other.vec_p);
		}
	};

	template <class T> class constVectorIterator : public VectorIterator<T>
	{
	public:
		constVectorIterator()	{};
		constVectorIterator(T* p)
		{
			this->vec_p = p;
		}

		constVectorIterator(constVectorIterator const &copy)
		{
			this->vec_p = copy.vec_p;
		}

		T const	operator * ()
		{
			return (*this->vec_p);
		}

		constVectorIterator	operator ++ ()
		{
			this->vec_p++;
			return *this;
		}
	
		constVectorIterator	operator ++ (int)
		{
			constVectorIterator<T>	temp(this->vec_p);
			this->vec_p++;
			return temp;
		}
		
		constVectorIterator	operator -- ()
		{
			this->vec_p--;
			return *this;
		}

		constVectorIterator	operator -- (int)
		{
			constVectorIterator<T>	temp(this->vec_p);
			this->vec_p--;
			return temp;
		}

		T const			operator -> ()
		{
			return &(*this->vec_p);
		}

		bool			operator == (constVectorIterator const &other) const {
			return (this->vec_p == other.vec_p);
		}

		bool			operator != (constVectorIterator const &other) const {
			return (this->vec_p != other.vec_p);
		}

		bool			operator < (constVectorIterator const &other) const {
			return (this->vec_p < other.vec_p);
		}

		bool			operator <= (constVectorIterator const &other) const {
			return (this->vec_p <= other.vec_p);
		}

		bool			operator > (constVectorIterator const &other) const {
			return (this->vec_p > other.vec_p);
		}

		bool			operator >= (constVectorIterator const &other) const {
			return (this->vec_p >= other.vec_p);
		}
	};

	template <class T> class reverseVectorIterator : public VectorIterator<T>
	{
	public:
		reverseVectorIterator()	{};
		reverseVectorIterator(T * p)
		{
			this->vec_p = p;
		}

		reverseVectorIterator(reverseVectorIterator const &copy)
		{
			this->vec_p = copy.vec_p;
		}

		T  	operator * ()
		{
			return (*this->vec_p);
		}

		reverseVectorIterator	operator ++ ()
		{
			this->vec_p--;
			return *this;
		}
	
		reverseVectorIterator	operator ++ (int)
		{
			reverseVectorIterator<T>	temp(this->vec_p);
			this->vec_p--;
			return temp;
		}
		
		reverseVectorIterator	operator -- ()
		{
			this->vec_p++;
			return *this;
		}

		reverseVectorIterator	operator -- (int)
		{
			reverseVectorIterator<T>	temp(this->vec_p);
			this->vec_p++;
			return temp;
		}

		T		*	operator -> ()
		{
			return &(*this->vec_p);
		}

		bool			operator == (reverseVectorIterator const &other) const {
			return (this->vec_p == other.vec_p);
		}

		bool			operator != (reverseVectorIterator const &other) const {
			return (this->vec_p != other.vec_p);
		}

		bool			operator < (reverseVectorIterator const &other) const {
			return (this->vec_p < other.vec_p);
		}

		bool			operator <= (reverseVectorIterator const &other) const {
			return (this->vec_p <= other.vec_p);
		}

		bool			operator > (reverseVectorIterator const &other) const {
			return (this->vec_p > other.vec_p);
		}

		bool			operator >= (reverseVectorIterator const &other) const {
			return (this->vec_p >= other.vec_p);
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
