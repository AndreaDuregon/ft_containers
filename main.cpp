#include "List.hpp"
#include <list>
#include <iterator>
#include <iostream>
/* COLORS */
#define RED "\033[0;31m"
#define	GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"
/* END COLORS */


int main(void)
{
    /* TESTER LIST */
    std::cout << YELLOW <<"TESTER LIST" << OFF <<std::endl;

    std::list<int> sys_list;
    sys_list.push_back(10);
    std::list<int>::iterator sys_it = sys_list.begin();
    std::cout << *sys_it << std::endl;

    ft::list<int> list;
    sys_list.push_back(10);
    ft::list<int>::iterator it = list.begin();
    std::cout << *it << std::endl;

}
