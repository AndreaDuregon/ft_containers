#include "Map.hpp"
#include "RBTree.hpp"
#include <string>
#include <unistd.h>
#include <time.h>

int main (void)
{
    std::srand(time(0));
    
    //ft::RBTree<ft::pair<int, int> > tree;
    //for (int i = 0; i < 25; i++)
    //{
    //    int val = std::rand() % 100;
    //    ft::TreeNode<ft::pair<int, int> > *v = new ft::TreeNode<ft::pair<int, int> >(ft::pair<int, int>(val,val));
    //    tree.insert(*v);
    //}
    //tree.printTree();

    ft::map<int, int> mappa;
    for (int i = 0; i < 25; i++)
    {
        int val = std::rand() % 100;
        mappa.insert(ft::pair<const int, int>(val,val));
    }
    mappa._tree.printTree();
    std::cout << "BEGIN: " << *mappa.begin() << std::endl;
    std::cout << "++BEGIN: " << *++mappa.begin() << std::endl;
    return (0);
}
