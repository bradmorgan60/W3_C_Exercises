/*
9. Write a C program to find the maximum element in a queue.
Expected Output:

Queue elements are: 1 2 3 4 5 
Maximum value in the queue is: 5

Remove 2 elements from the said queue:
Queue elements are: 3 4 5 
Maximum value in the queue is: 5

Insert 3 more elements:
Queue elements are: 3 4 5 600 427 519 
Maximum value in the queue is: 600
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];

} Queue;

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->back = -1;

    return q;
}

int is_empty(Queue* q) {
    return q->front == -1;
}

int is_full(Queue* q) {
    return q->back == MAX_SIZE - 1;
}

int max(Queue* q) {
    int max = q->queue[q->front];
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = q->front; i <= q->back; i++) {
        if (q->queue[i] > max) {
            max = q->queue[i];
        }
    }
    return max;
}

void display(Queue* q) {
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

void enqueue(Queue* q, int number) {
    if (is_full(q)) {
        printf("Queue is full...no more values may be added\n");
        return;
    }

    if (q->front == -1 || q->front > q->back) {
        q->front = 0;
    }

    q->back++;
    q->queue[q->back] = number;
}

int main() {
    Queue* q = create_queue();

    return 0;
}