/*
7. Write a C program that extends the binary tree program to perform a level-order traversal. 
Print the nodes at each level from top to bottom.
*/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create_node(int value) {
    // allocate memory address space to new nodes added to the tree
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

// void display(struct TreeNode* root) {
//     if (root != NULL) {
//         display(root->left);
//         printf("%d ", root->data);
//         display(root->right);
//     }
// }

int TreeHeight(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = TreeHeight(root->left);
    int rightHeight = TreeHeight(root->right);

    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
}

void display(struct TreeNode* root) {
    if (root != NULL) {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
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

    printf("Level-order traversal of a binary tree\n");
    printf("--------------------\n");

    do
    {
       printf("Enter value: ");
       scanf("%d", &NodeValue);

       if (root != NULL) {
            root = insert_node(root, NodeValue);
       }

    } while (NodeValue != 0);

    int height = TreeHeight(root);
    printf("Height of tree: %d\n", height);

    display(root);
    // display(root);
    FreeTree(root);

    return 0;
}