#include "RBTree.hpp"
#include <string>


int main (void)
{
    ft::RBTree<int, int> tree;
    int x = tree._size;
    //std::cout << "SIZE: " << x << std::endl;
    ft::TreeNode<int, int> v = ft::TreeNode<int,int>(90,90);
    ft::TreeNode<int, int> v2 = ft::TreeNode<int,int>(1,1);
    ft::TreeNode<int, int> v3 = ft::TreeNode<int,int>(100,100);
    ft::TreeNode<int, int> v4 = ft::TreeNode<int,int>(91,91);
    ft::TreeNode<int, int> v5 = ft::TreeNode<int,int>(500,500);
    ft::TreeNode<int, int> v6 = ft::TreeNode<int,int>(480,480);

    ft::TreeNode<int, int> v7 = ft::TreeNode<int,int>(360,360);

    ft::TreeNode<int, int> v8 = ft::TreeNode<int,int>(2,2);
    tree.insert(v);
    tree.insert(v2);
    tree.insert(v3);
    tree.insert(v4);
    tree.insert(v5);
    tree.insert(v6);
    tree.insert(v7);
    tree.insert(v8);
    x = tree._size;

    //std::cout << "SIZE: " << x << std::endl;
    ////std::cout << tree._root->right->left->value->second << std::endl;

    //std::cout<< tree.begin().value->first << std::endl;
    //std::cout<< tree.end().value->first << std::endl;
    //std::cout << tree._deep << std::endl;
    //std::cout << tree._deep << std::endl;
    std::string in = "";
    tree.printD2435(*tree._root);

    return (0);
}
