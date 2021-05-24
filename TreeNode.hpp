//
// Created by Simone Giovo on 24/05/2021.
//

#ifndef FT_CONTAINERS_TREENODE_HPP
#define FT_CONTAINERS_TREENODE_HPP

namespace ft
{
    enum Color {
        RED,
        BLACK
    };

    template <class Tp>
    struct TreeNode
    {
        Tp              value;
        Color           color;
        typedef struct TreeNode<Tp> *father;
        typedef struct TreeNode<Tp> *sx;
        typedef struct TreeNode<Tp> *dx;
    };
}

#endif //FT_CONTAINERS_TREENODE_H
