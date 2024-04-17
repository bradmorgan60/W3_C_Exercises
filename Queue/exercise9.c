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

void dequeue(Queue* q) {
    if (is_empty(q)) {
        printf("Cannot dequeue. Queue is empty\n");
        return;
    }
    q->front++;
}

int main() {
    int size;
    Queue* q = create_queue();

    if (is_empty(q)) {
        printf("Initialize the queue!\n");
        printf("Enter queue size: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(q, number);
        }
    }
    printf("First Queue: ");
    display(q);

    int is_max = max(q);
    printf("Max of First Queue: %d\n", is_max);

    printf("\n");

    enqueue(q, 300);
    enqueue(q, 400);

    is_max = max(q);
    printf("Second queue: ");
    display(q);
    printf("Max of Second Queue: %d\n", is_max);
    printf("\n");

    dequeue(q);
    dequeue(q);
    dequeue(q);


    enqueue(q, 600);
    printf("Third Queue: ");
    is_max = max(q);
    display(q);
    printf("Max of Third Queue: %d\n", is_max);

    return 0;
}