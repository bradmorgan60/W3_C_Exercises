/*
6. Write a C program to create a mirror image of a binary tree. 
Print both the original and mirrored trees.
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left; // storing a pointer for variable 'left'
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

void InOrderTraversal(struct TreeNode* root) {
    // printf("Ascending: ");
    if (root != NULL) {
        InOrderTraversal(root->left);
        printf("%d ", root->data);
        InOrderTraversal(root->right);
    }
}

void ReverseOrderTraversal(struct TreeNode* root) {
    // printf("Descending: ");
    if (root != NULL) {
        ReverseOrderTraversal(root->right);
        printf("%d ", root->data);
        ReverseOrderTraversal(root->left);
    }
}

void FreeTree(struct TreeNode* root) {
    if (root != NULL) {
        FreeTree(root->left);
        FreeTree(root->right);
        free(root);
    }
}
 
int main() {
    struct TreeNode* root = NULL;
    int NodeValue;

    printf("Mirror Tree Exercise\n");

    do
    {
        printf("Enter a value: ");
        scanf("%d", &NodeValue);

        if (NodeValue != 0) {
            root = insert_node(root, NodeValue);
        }

    } while (NodeValue != 0);


    InOrderTraversal(root);
    printf("\n");
    // FreeTree(root);
    ReverseOrderTraversal(root);
    FreeTree(root);
    
    
    return 0;
}