// Created by simone giovo on 30/05/2021.
//

#pragma once

#include "Vector.hpp"
#include "List.hpp"
#include "IteratorList.hpp"
#include "IteratorDeque.hpp"

namespace ft {

    template < class T, class Allocator = std::allocator<T> > class deque {
        private:
        public:
            ft::list<ft::vector<T> >                   *list;
            size_t                          size;
            size_t                          _start;
            size_t                          _end;

            typedef T								value_type;
            typedef Allocator						allocator_type;
            typedef value_type&						reference;
            typedef const value_type&				const_reference;
            typedef	value_type*						pointer;
            typedef	const value_type*				const_pointer;
            typedef typename ft::DequeIterator<T>	iterator;
            typedef typename ft::listIterator<T*>   subIterator;
            //typedef typename ft::clistIterator<T>	const_iterator;
            //typedef	typename ft::rlistIterator<T>	reverse_iterator;
            //typedef	typename ft::rclistIterator<T>	const_reverse_iterator;
            typedef std::ptrdiff_t 					difference_type;
            typedef size_t							size_type;

            deque() {
                this->list = new ft::list<ft::vector<T> >;
                this->_start = 0;
                this->_end = 0;
                this->size = 0;
                this->list->push_front(ft::vector<T>(8, 0));
            }

            deque(size_type n, value_type val) {
                this->list = new ft::list<ft::vector<T> >;
                this->size = n;
                for (size_t i = 0; i < ((this->size / 8) + 1); i++)
                {
                    this->list->push_back(ft::vector<T>(8, val));
                    n -= 8;
                }
                this->_end = this->size;
                this->_start = 0;
            }

            deque (iterator first, iterator last, 
                    const allocator_type& alloc = allocator_type())
            {
                this->list = new ft::list<ft::vector<T> >;
                size_t  len = 0;

                while (first != last)
                {   
                    ft::vector<T>  tmp;
                    for (size_t k = 0; k < 8 && first != last ; k++)
                    {
                        tmp.push_back(*first);
                        first++;
                        len++;
                    }
                    this->list->push_back(ft::vector<T>(tmp));
                }
                this->_start = 0;
                this->_end = len;
                this->size = len;
            }

            ~deque() {
                //delete this->list;
            }

            iterator    begin(void)
            {
                iterator    it;
                it._end = this->_end;
			    it._start = this->_start;
			    it._list = *this->list;
			    it._list_iterator = this->list->begin();
			    it._vector_iterator = this->list->begin()._curr->value.begin();
                //std::cout << it._vector_iterator.vec_p <<std::endl;
                for (size_t i = 0; i < it._start; i++)
                    it._vector_iterator++;
                return it;
            }

            iterator    end(void)
            {
                iterator    it;
                ft::listIterator<ft::vector<T> >    end(this->list->end());
                end--;
                it._end = this->_end;
			    it._start = this->_start;
			    it._list = *this->list;
			    it._list_iterator = end;
			    it._vector_iterator = end._curr->value.end();
                it._vector_iterator--;
                for (size_t i = 0; i < (8 - (it._end % 8)); i++)
                    it._vector_iterator--;
                return it;
            } 
    };
}

