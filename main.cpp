#include "List.hpp"
#include <list>
#include <iterator>
#include <iostream>

struct Ciao
{
    int x;
    float yyy;
};

int main()
{
    Ciao c = Ciao();
    std::list<int> lista;
    lista.push_front(123);
    lista.push_front(90);
    std::list<int>::iterator it = lista.begin();
    std::cout << *it++ << std::endl;
    std::cout << *it << std::endl;
    ft::listIterator<Ciao> i;
}
