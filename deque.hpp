// Created by simone giovo on 30/05/2021.
//

#ifndef FT_CONTAINERS_DEQUE_H
#define FT_CONTAINERS_DEQUE_H

#include "Vector.hpp"
#include "List.hpp"

namespace ft {

    template < class T, class Allocator = std::allocator<T> > class deque {
        private:
        public:
            ft::list<ft::vector<T> >        *list;
            size_t                          size;
            typedef T								value_type;
            typedef Allocator						allocator_type;
            typedef value_type&						reference;
            typedef const value_type&				const_reference;
            typedef	value_type*						pointer;
            typedef	const value_type*				const_pointer;
            //typedef typename ft::listIterator<T>	iterator;
            //typedef typename ft::clistIterator<T>	const_iterator;
            //typedef	typename ft::rlistIterator<T>	reverse_iterator;
            //typedef	typename ft::rclistIterator<T>	const_reverse_iterator;
            typedef std::ptrdiff_t 					difference_type;
            typedef size_t							size_type;

            deque() {
                this->list = new ft::list<ft::vector<T> >(1);
                ft::listIterator<ft::vector<T> > it(this->list->begin());
                it._curr->value = ft::vector<T>(8);
            }

            deque(size_type n, value_type val) {
                this->list = new ft::list<ft::vector<T> >((n / 8) + 1);
                ft::listIterator<ft::vector<T> > it(this->list->begin());
                ft::VectorIterator<T>   it_vect;

                while (it != this->list->end())
                {
                    it_vect = it._curr->value.begin();
                    it._curr->value.insert(it_vect, 8, val);
                    it++;
                }
                --it;
                for (size_t i = (8 - (n % 8)); i > 0; i--)
                    it._curr->value.pop_back();
            }

            ~deque() {}
    };
}

#endif //FT_CONTAINERS_DEQUE_H
