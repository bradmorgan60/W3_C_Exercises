
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// int front = -1;
// int back = -1;
// int queue[MAX_SIZE];

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];
} Queue;

Queue* create_queue() {
    Queue* q = malloc(sizeof(Queue));
    q->front = -1;
    q->back = -1;
    return q;
}

void display(Queue* q) {
    printf("Queue: ");
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

void enqueue(Queue* q, int number) {
    if (q->back == MAX_SIZE - 1) {
        printf("Queue is full. No more elements may be added\n");
    }
    if (q->front == -1) {
        q->front = 0;
    }

    q->queue[q->back] = number;
    q->back++; // incrementing the back of the queue by specified value
}

int main() {
    Queue *q;

    display(q);

    return 0;
}