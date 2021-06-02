#include "Map.hpp"
#include "RBTree.hpp"
#include "Less.hpp"
#include <string>
#include <unistd.h>
#include <time.h>
#include <map>
#define BLUE "\033[44m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"

int main (void)
{
    std::map<int, int> sys_map;
    ft::map<int, int> our_map;
    sys_map.insert(std::pair<int, int>(100, 100));
    sys_map.insert(std::pair<int, int>(10, 10));
    sys_map.insert(std::pair<int, int>(15, 15));
    sys_map.insert(std::pair<int, int>(110, 110));
    sys_map.insert(std::pair<int, int>(99, 99));
    sys_map.insert(std::pair<int, int>(98, 98));
    our_map.insert(ft::pair<int, int>(100, 100));
    our_map.insert(ft::pair<int, int>(10, 10));
    our_map.insert(ft::pair<int, int>(15, 15));
    our_map.insert(ft::pair<int, int>(110, 110));
    our_map.insert(ft::pair<int, int>(99, 99));
    our_map.insert(ft::pair<int, int>(98, 98));

    sys_map.erase(sys_map.find(100));
    our_map.erase(our_map.find(100));

    if (equalSysFt(sys_map, our_map))
        std::cout << GREEN;
    else
        std::cout << RED;
    std::cout << "ERASE (iterator) test 3 (node 2 child)" << OFF << std::endl;



}