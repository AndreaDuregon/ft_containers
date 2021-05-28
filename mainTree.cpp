#include "RBTree.hpp"
#include <string>
#include <unistd.h>
#include <time.h>


int main (void)
{
    std::srand(time(0));
    ft::RBTree<ft::pair<int, int> > tree;
    //ft::TreeNode<ft::pair<int, int> > v(ft::pair<int, int>(101,0));
    //ft::TreeNode<ft::pair<int, int> > v2(ft::pair<int, int>(102,0));
    //ft::TreeNode<ft::pair<int, int> > v3(ft::pair<int, int>(103,0));
    //ft::TreeNode<ft::pair<int, int> > v4(ft::pair<int, int>(104,0));
    //ft::TreeNode<ft::pair<int, int> > v5(ft::pair<int, int>(105,0));
    //ft::TreeNode<ft::pair<int, int> > v6(ft::pair<int, int>(106,0));
    //ft::TreeNode<ft::pair<int, int> > v7(ft::pair<int, int>(107,0));
    //ft::TreeNode<ft::pair<int, int> > v8(ft::pair<int, int>(108,0));
    //ft::TreeNode<ft::pair<int, int> > v9(ft::pair<int, int>(109,0));
    //tree.insert(v9);
    //tree.insert(v8);
    //tree.insert(v7);
    //tree.insert(v6);
    //tree.insert(v5);
    //tree.insert(v4);
    //tree.insert(v3);
    //tree.insert(v2);
    //tree.insert(v);
    for (int i = 0; i < 20; i++)
    {
        ft::TreeNode<ft::pair<int, int> > *v = new ft::TreeNode<ft::pair<int, int> >(ft::pair<int, int>(std::rand() % 100,0));
        tree.insert(*v);
        tree.printTree();
        sleep(0.5);
    }
    //tree.printTree();
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
    //tree.leftRotation(tree._root->left);

    //tree.leftRotation(tree._root->right);

    //tree.rightRotation(tree._root->right);

    //tree.rightRotation(tree._root->right);
    //tree.rightRotation(tree._root);

	//tree.iterate();
    //std::cout << tree.isValid() << std::endl;

    return (0);
}
