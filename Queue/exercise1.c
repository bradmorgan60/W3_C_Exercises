/*
1. Write a C program to implement a queue using an array. Programs should contain functions for 
  inserting elements into the queue
  displaying queue elements
  checking whether the queue is empty or not

Expected Output:

Initialize a queue!
Check the queue is empty or not? Yes

Insert some elements into the queue:
Queue elements are: 1 2 3 

Insert another element into the queue:
Queue elements are: 1 2 3 4 

Check the queue is empty or not? No  
*/


#include <stdio.h>
#include <stdlib.h>

void display(int size, int *arr) {
    printf("Queue elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insert(int size, int *arr, int key) {
    arr[size] = key;
    size++;
}

void is_empty(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        if (arr == NULL) {
            printf("Array is empty...\n");
            break;
        } else {
            printf("Array is not empty...\n");
            break;
        }
    }
}

int main() {
    int size, *arr;

    is_empty(size, arr);

    printf("Initialize the queue!\n");

    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    arr = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Num-%d: ", i + 1);
        scanf("%d", (arr + i));
    }
    // printf("\n");

    is_empty(size, arr);
    display(size, arr);


    



    return 0;
}