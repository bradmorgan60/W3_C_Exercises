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

int TreeHeight(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = TreeHeight(root->left);
    int rightHeight = TreeHeight(root->right);

    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
}


void FreeTree(struct TreeNode* root) {
    if (root != NULL) {
        FreeTree(root->left);
        // printf("%d ", root->data);
        FreeTree(root->right);
        free(root);
    }
}

// void display(struct TreeNode* root, int size) {
//     printf("Height of Tree: ");
//     for (int i = 0; i < (sizeof(size) / 4); i++) {
//         printf("%d ", root->data);
//     }
//     printf("\n");
// }

int main() {
    printf("Program will display the height of binary tree\n");
    struct TreeNode* root = NULL;
    int NodeValue;

    do
    {
        printf("Enter a value: (0 to end program): ");
        scanf("%d", &NodeValue);

        if (NodeValue != 0) {
            root = insert_node(root, NodeValue);
        }

    } while (NodeValue != 0);

    // display(root, root->data);

    int height = TreeHeight(root);
    printf("Height of tree: %d", height);
    
    printf("Values entered: ");
    FreeTree(root);
    return 0;
}