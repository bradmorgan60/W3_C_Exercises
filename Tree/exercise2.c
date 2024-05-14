/*
2. Write a C program to perform an in-order traversal of a binary tree. Print the elements in sorted order.
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create_node(int value) {
    struct TreeNode* NewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode*));

    if (NewNode != NULL) {
        NewNode->data = value;
        NewNode->left = NULL;
        NewNode->right = NULL;
    };

    return NewNode;
}

struct TreeNode* insert_node(struct TreeNode* root, int value) {
    if (root == NULL) {
        return create_node(value);
    }
    if (value < root->data) {
        root->left = insert_node(root->left, value);
    }

    else if (value > root->data) {
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

void FreeTree(struct TreeNode* root) {
    if (root != NULL) {
        FreeTree(root->left);
        FreeTree(root->right);
        free(root);
    }
}

int main() {
    printf("In-Order Traversal of a Binary Tree\n");
    printf("--------------------------------------\n");

    struct TreeNode* root = NULL;
    int userInput;
    char choice;

    do
    {
        printf("Enter a value for the binary tree (press 0 to stop): ");
        scanf("%d", &userInput);

        if (userInput != 0) {
            root = insert_node(root, userInput);
        }

        // printf("Enter another number? (y/n): ");
        scanf("%c", &choice);
        
    } while (userInput != 0);

    printf("In-Order Traversal of a Binary Tree\n");

    InOrderTraversal(root);
    printf("\n");

    FreeTree(root);

    

    return 0;
}