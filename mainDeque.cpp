//
// Created by simone giovo on 30/05/2021.
//

#include "deque.hpp"

int main(){
    ft::deque<int> d(10, 2);
    ft::listIterator<ft::vector<int> >    it(d.list->begin());

    while (it != d.list->end())
    {
        ft::VectorIterator<int>   vect_it(it._curr->value.begin());
        //std::cout << "wewe\n";
        while (vect_it != it->end())
        {
            std::cout << *vect_it << std::endl;
            vect_it++;
        }
        it++;
    }
};