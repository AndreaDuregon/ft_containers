#include "RBTree.hpp"
#include <string>


int main (void)
{
    ft::RBTree<ft::pair<int, int> > tree;
    int x = tree._size;
    std::cout << "SIZE: " << x << std::endl;
    ft::TreeNode<ft::pair<int, int> > v(ft::pair<int, int>(90,90));
    ft::TreeNode<ft::pair<int, int> > v2(ft::pair<int, int>(1,1));
    ft::TreeNode<ft::pair<int, int> > v3(ft::pair<int, int>(100,100));
    ft::TreeNode<ft::pair<int, int> > v4(ft::pair<int, int>(500,500));
    ft::TreeNode<ft::pair<int, int> > v5(ft::pair<int, int>(480,480));
    ft::TreeNode<ft::pair<int, int> > v6(ft::pair<int, int>(-91,-91));
    ft::TreeNode<ft::pair<int, int> > v7(ft::pair<int, int>(2,2));
    ft::TreeNode<ft::pair<int, int> > v8(ft::pair<int, int>(3,3));
    ft::TreeNode<ft::pair<int, int> > v9(ft::pair<int, int>(4,4));
    tree.insert(v);
    tree.insert(v2);
    tree.insert(v3);
    tree.insert(v4);
    tree.insert(v5);
    tree.insert(v6);
    tree.insert(v7);
    tree.insert(v8);
    tree.insert(v9);
    x = tree._size;
    ft::binaryTreeIterator<ft::pair<int, int> > it = tree.begin();
    tree.end();

    while(it != tree.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }
    ////std::cout << "SIZE: " << x << std::endl;
    ////std::cout << tree._root->right->left->value->second << std::endl;

    //std::cout<< tree.begin().value->first << std::endl;
    //std::cout<< tree.end().value->first << std::endl;
    //std::cout << tree._deep << std::endl;
    //std::cout << tree._deep << std::endl;
    tree.printTree();
	//tree.iterate();
    std::cout << tree.isValid() << std::endl;

    return (0);
}
