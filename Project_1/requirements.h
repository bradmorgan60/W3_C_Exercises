#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct Queue {
    int front;
    int back;
};

struct stock {
    int quantity;
    int *arr;
};


