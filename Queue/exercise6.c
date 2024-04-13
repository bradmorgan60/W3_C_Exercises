/*
6. Write a C program to reverse the elements of a queue.
Expected Output:

Queue elements are:
1 2 3 4 5
Reverse Queue, elements are:
5 4 3 2 1
Add two elements to the said queue:
Queue elements are:
5 4 3 2 1 100 200
Reverse Queue, elements are:
200 100 1 2 3 4 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];
} Queue;


Queue* create_queue() {
    int size;
    Queue* q = (Queue*)malloc(sizeof(Queue)); // need to allocate memory address space for the queue
    q->front = -1;
    q->back = -1;
    return q;

}

void display(Queue* q) {
    // printf("Queue: ");
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

int isEmpty(Queue* q) {
    return q->back == -1;  // -1 indicates an empty queue
}

int isFull (Queue* q) {
    return q->back == MAX_SIZE -1; // full queue
}

void enqueue(Queue* q, int number) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->back++;
        q->queue[q->back] = number;
    }

}

int dequeue(Queue* q) {
    int item;
    if (isFull(q)) {
        printf("Queue is full\n");
        item = -1;
    }
    else {
        item = q->queue[q->front];
        q->front++;
        if (q->front > q->back) {
            q->front = q->back = -1;
        }
    }
    return item;
}

void reverse(Queue* q) {
    /*
        Replace index 0 with index -1? 
        Would this just include a swap algorithm?

        Need to dequeue everything, store in a temporary array, then enqueue them
        LIFO data structure...which is how the stack works
    */
   int temp[MAX_SIZE];
   int top = -1;
   while (!isEmpty(q)) {
        temp[++top] = dequeue(q);
   }
   // dequeue EVERYTHING from the current queue and store in a temporary data structure

   while (top != -1) {
        enqueue(q, temp[top--]);
    // queue EVERYTHING back into reverse order
   }

}

int main() {
    int size;
    Queue* q = create_queue();
    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        int number;
        printf("Num-%d: ", i + 1);
        scanf("%d", &number);
        enqueue(q, number);
    }

    printf("Queue: ");
    display(q);
    reverse(q);

    printf("Reversed queue: ");
    display(q);

    enqueue(q, 100);
    enqueue(q, 200);

    printf("New values: ");
    display(q);

    printf("Reverse again: ");
    reverse(q);
    display(q);



}