/*
5. Write a C program that implements a deletion function for a binary tree. 
Allow users to delete nodes while maintaining the binary search tree structure.
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
    // int root_left, root_right;
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

struct TreeNode* delete_node(struct TreeNode* root, int value) {
    int root_left, root_right;
    if (root == NULL) {
        printf("Cannot delete nodes...none exist\n");
        return 0;
    }

    else {
        root = delete_node(root, value);
        // root_right = delete_node(root->right, value);
    }

    return root;
}

void Traversal(struct TreeNode* root) {
    Traversal(root->left);
    printf("%d ", root->data);
    Traversal(root->right);
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
    int nodeValue;
    char choice;

    printf("Deletion of nodes in a binary tree\n");
    printf("Press 0 to terminate program: ");

    do
    {
        printf("Enter value: ");
        scanf("%d", &nodeValue);

        root = insert_node(root, nodeValue);

         if (root != 0) {
            printf("Do you want to delete a node? (y/n): ");
            scanf("%c", &choice);

            if (choice == 'y' || choice == 'Y') {
                root = delete_node(root, nodeValue);
                ++root;
                return nodeValue = 0;
            }
            
    }
    } while (nodeValue != 0);

    Traversal(root);
    printf("\n");
    FreeTree(root);
    
    return 0;
}