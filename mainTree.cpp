#include "RBTree.hpp"
#include <string>


int main (void)
{
    ft::RBTree<ft::pair<int, int> > tree;
    ft::TreeNode<ft::pair<int, int> > v(ft::pair<int, int>(90,90));
    ft::TreeNode<ft::pair<int, int> > v2(ft::pair<int, int>(1,1));
    ft::TreeNode<ft::pair<int, int> > v3(ft::pair<int, int>(100,100));
    ft::TreeNode<ft::pair<int, int> > v4(ft::pair<int, int>(500,500));
    ft::TreeNode<ft::pair<int, int> > v5(ft::pair<int, int>(91,91));
    ft::TreeNode<ft::pair<int, int> > v6(ft::pair<int, int>(-91,-91));
    ft::TreeNode<ft::pair<int, int> > v7(ft::pair<int, int>(2,2));
    tree.insert(v);
    tree.insert(v2);
    tree.insert(v3);
    tree.insert(v6);
    //tree.insert(v4);
    tree.insert(v5);
    tree.insert(v7);

    tree.printTree();
    //tree.isValid();
    //std::cout << tree.isValid() << std::endl;

    //x = tree._size;

    //ft::binaryTreeIterator<ft::pair<int, int> > it = tree._root->right;
    //std::cout << "SIZE: " << *it << std::endl;
    ////std::cout << tree._root->right->left->value->second << std::endl;

    //std::cout<< tree.begin().value->first << std::endl;
    //std::cout<< tree.end().value->first << std::endl;
    //std::cout << tree._deep << std::endl;
    //std::cout << tree._deep << std::endl;
    //tree.printTree();
    //tree.printTree();
    tree.leftRotation(tree._root->left);
    tree.printTree();
    //tree.rightRotation(tree._root);

	//tree.iterate();
    //std::cout << tree.isValid() << std::endl;

    return (0);
}
