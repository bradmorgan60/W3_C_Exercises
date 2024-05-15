/*
3. Write a C program that extends the binary tree program to support the insertion of elements. 
This is in a way that maintains the binary search tree property.
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create_node(int value) {
    struct TreeNode* NewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode)); // dynamically allocate memory for the new nodes

    if (NewNode != NULL) {
        NewNode->data = value;
        NewNode->left = NULL;
        NewNode->right = NULL;
    }

    return NewNode;
}

// Insertion of elements of the binary tree
struct TreeNode* insert_node(struct TreeNode* root, int value) {
    if (root == NULL) {
        return create_node(value);  // originally had root->data as the input to the function
    }

    if (root->data > value) {
        root->left = insert_node(root->left, value);
    }

    else if (root->data < value) {
        root->right = insert_node(root->right, value);
    }

    return root;
}

void FreeTree(struct TreeNode* root) {
    if (root != NULL) {
        FreeTree(root->left);
        FreeTree(root->right);
        free(root);
    }
}

// void display(struct TreeNode* root, int size, int value) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", value);
//     }
//     printf("\n");
// }

void InOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        InOrderTraversal(root->left);
        printf("%d ", root->data);
        InOrderTraversal(root->right);
    }
}

void NonOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        NonOrderTraversal(root->right);
        printf("%d ", root->data);
        NonOrderTraversal(root->left);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int UserInput;

    do
    {
        printf("Enter value (0 to end program): ");
        scanf("%d", &UserInput);

        if (UserInput != 0) {
            root = insert_node(root, UserInput);
        }

    } while (UserInput != 0);

    printf("In-Order Traversal ");
    InOrderTraversal(root);
    printf("\n");

    // FreeTree(root);

    printf("Reverse-Order Traversal ");
    NonOrderTraversal(root);
    printf("\n");

    FreeTree(root);
    

    return 0;
}