// Including necessary header files
#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

// Function to insert a node into the binary tree
struct TreeNode* insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to calculate the height of a binary tree
int treeHeight(struct TreeNode* root) {
    if (root == NULL) {
        return 0; // Height of an empty tree is 0
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    // Return the maximum height of the left and right subtrees, plus 1 for the current node
    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
}

// Function to free the memory allocated for the binary tree
void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int nodeValue;
    char choice;

    // Insert nodes into the binary tree
    do {
        printf("Input a value to insert into the binary tree (enter 0 to stop): ");
        scanf("%d", &nodeValue);

        if (nodeValue != 0) {
            root = insertNode(root, nodeValue);
        }

    } while (nodeValue != 0);

    // Calculate and display the height of the binary tree
    int height = treeHeight(root);
    printf("\nHeight of the Binary Tree: %d\n", height);

    // Free allocated memory
    freeTree(root);

    return 0;
}
