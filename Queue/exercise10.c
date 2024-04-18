/*
10. Write a C program to find the minimum element in a queue.
Expected Output:

Queue elements are: 1 2 3 4 5 
Minimum value in the queue is: 1

Remove 2 elements from the said queue:
Queue elements are: 3 4 5 
Minimum value in the queue is: 3

Insert 3 more elements:
Queue elements are: 3 4 5 600 -427 519 
Minimum  value in the queue is: -427
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];

} Queue;

// initializing the queue to be empty
Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->back = -1;
    return q;
}

void display(Queue* q) {
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ",q->queue[i]);
    }
    printf("\n");
}

int min(Queue* q) {
    int min = q->queue[q->front];
    for (int i = q->front; i <= q->back; i++) {
        if (q->queue[i] < min) {
            q->queue[i] = min;
        }
    }
    return min;
}

int is_empty(Queue* q) {
    return q->front == -1;
}


int is_full(Queue* q) {
    return q->back == MAX_SIZE - 1;
}

void enqueue(Queue* q, int number) {
    if (is_full(q)) {
        printf("Queue is full");
        return;
    }

    if (is_empty(q)) {
        q->front = 0;
    }

    q->back++;
    q->queue[q->back] = number;
}

void dequeue(Queue* q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    }
    else {
        q->front++;
    }
}

int main() {
    Queue* q = create_queue();
    int size;
    if (is_empty(q)) {
        printf("Initalize the queue!\n");
        printf("Enter size of queue: ");
        scanf("%d", &size);
        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(q, number);
        }
    }
    printf("Original queue: ");
    display(q);

    int is_min = min(q);
    printf("Min value of original queue: %d\n", is_min);

    printf("\n");

    printf("Remove 2 elements from queue\n");
    printf("\n");

    dequeue(q);
    dequeue(q);

    display(q);

    is_min = min(q);
    printf("Min value of original queue: %d\n", is_min);

    printf("Add 3 elements to the queue\n");
    enqueue(q, 400);
    enqueue(q, -417);
    enqueue(q, 111);

    printf("\n");

    display(q);

    is_min = min(q);
    printf("Min value of original queue: %d\n", is_min);

    return 0;
}