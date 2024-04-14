
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

int is_empty(Queue* q) {
    if (q->front == -1) return 1;
    else return 0;
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

int dequeue(Queue* q) {
    int item;
    if (is_empty(q)) {
        printf("Queue is empty\n");
        item = -1;
    }
    else {
        item = q->queue[q->front];
        q->front++; // increment front
        if (q->front > q->back) {  // check if the front has crossed the back...which means empty queue
            q->front = q->back = 1; // reset the front and rear to -1
        }
    }

    return item;

}

void reverse_queue(Queue* q) {
    int temp[MAX_SIZE];  // temporary array to store elements
    int top = -1; // initialize the top of the array

    while (!is_empty(q)) { // dequeue the elements from the queue and store in a temporary array
        temp[++top] = dequeue(q);
    }

    while (top != -1) {
        enqueue(q, temp[top--]);
    }
}
int main() {
    Queue *q = create_queue();

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);

    printf("Queue elements: \n");
    display(q);

    printf("Reverse queue: \n");
    reverse_queue(q);

    display(q);

    return 0;
}