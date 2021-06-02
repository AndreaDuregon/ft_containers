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
    ft::map<int, int> our_map;
    our_map.insert(ft::pair<int, int>(10, 10));
    our_map.insert(ft::pair<int, int>(100, 100));
    our_map.insert(ft::pair<int, int>(15, 15));
    our_map.insert(ft::pair<int, int>(110, 110));
    our_map.insert(ft::pair<int, int>(99, 99));
    our_map.insert(ft::pair<int, int>(98, 98));

    //our_map._tree.printTree();
    our_map.erase(our_map.find(100));
    //our_map._tree.printTree();

    std::cout << *our_map._tree._root->right->right->father->left->value << std::endl;
}