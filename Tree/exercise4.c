/*
4. Write a C program to calculate the height of a binary tree. 
    Ensure the program handles empty trees gracefully.
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create_node(int value) {
    struct TreeNode* NewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    if (NewNode != NULL) {
        NewNode->data = value;
        NewNode->left = NULL;
        NewNode->right = NULL;
    }

    return NewNode;
}

struct TreeNode* insert_node(struct TreeNode* root, int value) {
    if (root == NULL) {
        return create_node(value);
    }

    if (value < root->data) {
        root->left = insert_node(root->left, value);
    }

    if (value > root->data) {
        root->right = insert_node(root->right, value);
    }

    return root;
}


void FreeTree(struct TreeNode* root) {
    if (root != NULL) {
        FreeTree(root->left);
        printf("%d ", root->data);
        FreeTree(root->right);
        free(root);
    }

}

int main() {
    printf("Program will display the height of binary tree\n");
    struct TreeNode* root = NULL;



    FreeTree(root);
    return 0;
}