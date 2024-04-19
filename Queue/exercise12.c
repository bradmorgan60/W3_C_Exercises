/*
12. Write a C program to sort the elements of a queue in ascending order.
Expected Output:

Input some elements into the queue:
Elements of the queue:
4 2 7 5 1 

Sort the said queue:
Elements of the sorted queue in ascending order:
1 2 4 5 7 

Input two more elements into the queue:
Elements of the queue:
1 2 4 5 7 -1 3 

Sort the said queue:
Elements of the sorted queue in ascending order:
-1 1 2 3 4 5 7 

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];
} Queue;

void sort(Queue* q, int num1, int num2) {
    int temp;
    for (int i = q->front; i <= q->back; i++) {
        for (int j = q->front + 1; i <= q->back; i++) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
}

void display(Queue* q) {
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

int is_empty(Queue* q) {
    return q->front == -1;
}

int is_full(Queue* q) {
    return q->back == MAX_SIZE - 1;
}



int main() {
    return 0;
}