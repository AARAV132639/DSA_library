#ifndef TREE_CONSTRUCTION_HPP
#define TREE_CONSTRUCTION_HPP

#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


/*
Build sample BST:

                  50
               /      \
             30        70
           /   \      /   \
         20    40    60    80
        / \    / \   / \   / \
      10 25  35 45 55 65 75 90



Expected inorder:
10 20 25 30 35 40 45 50 55 60 65 70 75 80 90
*/

TreeNode* buildSampleBST() {
    TreeNode* root = new TreeNode(50);

    root->left = new TreeNode(30);
    root->right = new TreeNode(70);

    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(40);

    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(80);

    root->left->left->left = new TreeNode(10);
    root->left->left->right = new TreeNode(25);

    root->left->right->left = new TreeNode(35);
    root->left->right->right = new TreeNode(45);

    root->right->left->left = new TreeNode(55);
    root->right->left->right = new TreeNode(65);

    root->right->right->left = new TreeNode(75);
    root->right->right->right = new TreeNode(90);

    return root;
}

#endif