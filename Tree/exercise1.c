/*
1. Write a C program that creates a binary tree. 
   Allow users to input nodes and build a binary tree structure.

Functions will need to be created to....
    1. Create the node
    2. Insert the node into the tree
    3. In-Order traversal of the binary tree
    4. Free the memory allocated to the binary tree



*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    // creating a variable that allows us to link it back to the struct

    if (newNode != NULL) {
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }

    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int value) {
    // parameter is linked back to the struct
    if (root = NULL) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    }

    else if(value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}


int main() {
    int leftNode, rightNode, index;

     return 0;
}