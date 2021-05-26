#include "RBTree.hpp"


int main (void)
{
    ft::RBTree<int, int> tree;
    int x = tree._size;
    std::cout << "SIZE: " << x << std::endl;
    ft::TreeNode<int, int> v = ft::TreeNode<int,int>(90,90);
    tree.insert(v);
    x = tree._size;

    std::cout << "SIZE: " << x << std::endl;
    std::cout << tree._root->value->second << std::endl;


    return (0);
}
