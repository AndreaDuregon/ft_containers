//
// Created by Simone Giovo on 26/05/2021.
//

#include "RBTree.hpp"
#include <iostream>
int main()
{
    ft::RBTree<int, int> tree;
    tree._root = new ft::TreeNode<int, int>(0,0);
    tree._root->right = new ft::TreeNode<int, int>(1,1);
    tree._root->right->father = tree._root;
    tree._root->left = new ft::TreeNode<int, int>(2,2);
    tree._root->left->father = tree._root;
    tree._root->right->right = new ft::TreeNode<int, int>(3,3);
    tree._root->right->right->father = tree._root->right;
    tree._root->right->left = new ft::TreeNode<int, int>(4,4);
    tree._root->right->left->father = tree._root->right;
    tree.leftRotation(tree._root);
    std::cout << tree._root->value->first << std::endl;
    std::cout << tree._root->left->value->first << std::endl;
    std::cout << tree._root->left->right->value->first << std::endl;
    ft::RBTree<int, int> tree1;
    tree1._root = new ft::TreeNode<int, int>(0,0);
    tree1._root->left = new ft::TreeNode<int, int>(1,1);
    tree1._root->left->father = tree1._root;
    tree1._root->right = new ft::TreeNode<int, int>(2,2);
    tree1._root->right->father = tree1._root;
    tree1._root->left->left = new ft::TreeNode<int, int>(3,3);
    tree1._root->left->left->father = tree1._root->left;
    tree1._root->left->right = new ft::TreeNode<int, int>(4,4);
    tree1._root->left->right->father = tree1._root->left;
    tree1.rightRotation(tree1._root);
    std::cout << tree1._root->value->first << std::endl;
    std::cout << tree1._root->right->value->first << std::endl;
    std::cout << tree1._root->right->left->value->first << std::endl;
//    std::cout << tree1._root->value->first << std::endl;
}