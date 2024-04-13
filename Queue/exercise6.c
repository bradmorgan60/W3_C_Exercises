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

void enqueue(Queue* q, int number) {
    if (q->back == MAX_SIZE - 1) {
        printf("Queue is full. No more integers may be added\n");
        return;
    }
    if (q->front == -1 || q->front > q->back) {
        q->front = 0;
    }

    q->back++;
    q->queue[q->back] = number;
}

Queue* create_queue() {
    int size;
    Queue* q = (Queue*)malloc(sizeof(Queue)); // need to allocate memory address space for the queue
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

    display(q);



}