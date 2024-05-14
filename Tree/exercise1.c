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

struct TreeNode* create_node(int value) {
    struct TreeNode* NewNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));

    if (NewNode != NULL) {
        NewNode->data = value;
        NewNode->left = NULL;
        NewNode->right = NULL;
    }

    return NewNode;
}

struct TreeNode* insert_node(struct TreeNode* root, int value) {
    /* 
        The root will be the smallest value
        If the new node is less than the root, insert to the left
        if the new node is greater than the root, insert to the right
    */
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
    if (root != NULL) {
        InOrderTraversal(root->left);
        printf("%d ", root->data);
        InOrderTraversal(root->right);
    }
}

void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    printf("In-Order Traversal of the Binary Tree\n");
    printf("-------------------------------------\n");

    struct TreeNode* root = NULL;
    char choice;
    int userInput, root;

    do
    {
        printf("Enter your first number: ");
        scanf("%d", &userInput);

        root = insert_node(root, userInput);

        printf("Enter another number? (y/n): ");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("In-Order Traversal of Binary Tree\n");
    InOrderTraversal(root);
    freeTree(root);
    
    return 0;
}