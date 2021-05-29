#include "RBTree.hpp"
#include <string>
#include <unistd.h>
#include <time.h>


int main (void)
{
    std::srand(time(0));
    ft::RBTree<ft::pair<int, int> > tree;
    for (int i = 0; i < 25; i++)
    {
        int val = std::rand() % 100;
        ft::TreeNode<ft::pair<int, int> > *v = new ft::TreeNode<ft::pair<int, int> >(ft::pair<int, int>(val,val));
        tree.insert(*v);
        //sleep(1);
        //std::cout << std::endl << std::endl ;
    }
    tree.printTree();


    return (0);
}
