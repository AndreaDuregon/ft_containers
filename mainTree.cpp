#include "Map.hpp"
#include "RBTree.hpp"
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

    //ft::mapIterator<int, int> it = our_map.end();
    ft::reverseMapIterator<int, int> it2 = our_map.rend();
    it2--;
    it2--;
    it2--;
    std::cout << *it2 << std::endl;
}
