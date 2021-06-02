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
    std::map<int, int> sys_map2;
    ft::map<int, int> our_map2;
    sys_map2.insert(std::pair<int, int>(100, 100));
    sys_map2.insert(std::pair<int, int>(10, 10));
    our_map2.insert(ft::pair<int, int>(100, 100));
    our_map2.insert(ft::pair<int, int>(10, 10));
    std::map<int, int> sys_map(sys_map2);
    ft::map<int, int> our_map(our_map2);



}