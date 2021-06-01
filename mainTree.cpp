#include "Map.hpp"
#include "RBTree.hpp"
#include "Less.hpp"
#include <string>
#include <unistd.h>
#include <time.h>

int main (void)
{
    ft::map<int, int> our_map;
	our_map.insert(ft::pair<int, int>(100, 100));
	our_map.insert(ft::pair<int, int>(10, 10));
	our_map.insert(ft::pair<int, int>(1, 1));
	our_map.insert(ft::pair<int, int>(123, 123));

    ft::map<int, int> sec_map;
	sec_map.insert(ft::pair<int, int>(3, 3));
	sec_map.insert(ft::pair<int, int>(5, 5));
	sec_map.insert(ft::pair<int, int>(4, 4));
    sec_map.insert(ft::pair<int, int>(6, 6));
    
    ft::mapIterator<int, int> it = our_map.begin();
    while (it != our_map.end())
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    our_map.swap(sec_map);
    it = our_map.begin();
    while (it != our_map.end())
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    ft::mapIterator<int, int> it2 = sec_map.begin();
    while (it2 != sec_map.end())
    {
        std::cout << *it2 << " ";
        ++it2;
    }
    std::cout << std::endl;
    return 0;
}