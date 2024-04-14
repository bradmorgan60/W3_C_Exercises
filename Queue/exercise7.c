/*
7. Write a C program to calculate the sum of the elements in a queue.
Expected Output:

Queue elements are: 1 2 3 4 5 
Sum of the elements in the queue is: 15

Remove 2 elements from the said queue:
Queue elements are: 3 4 5 
Sum of the elements in the queue is: 12

Insert 3 more elements:
Queue elements are: 3 4 5 300 400 500 
Sum of the elements in the queue is: 1212
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];
} Queue;

Queue* create_queue() {
    // setting the queue to empty
    Queue* q = (Queue*)malloc(sizeof(Queue)); // need to be able to allocate memory address space for queue
    q->front = -1;
    q->back = -1;
    return q;
}

void display(Queue* q) {
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}
int isFull(Queue* q) {
    return q->back == MAX_SIZE - 1;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}

void enqueue(Queue* q, int number) {
    // check if the queue is full first. if it is not full, you may add elements
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    } 
    if (q->front == -1) {
        q->front = 0;
    }

    q->back++;
    q->queue[q->back] = number;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    q->front++;  // removing from the front of the queue
}

void add(Queue* q) {
    int size, sum = 0;
    for (int i = 0; i < size; i++) {
        sum += q->queue[i];
    }
    printf("Sum of Queue: %d\n", sum); 
}


int main() {
    int size, sum = 0;
    Queue* q = create_queue();

    if(isEmpty(q)) {
        printf("Initialize the queue!\n");
        printf("Enter the size of the queue: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i+1);
            scanf("%d", &number);
            enqueue(q, number);
        }
    }

    display(q);
    add(q);

    printf("\nAdding 2 numbers to the queue\n");
    enqueue(q, 100);
    enqueue(q, 200);

    display(q),
    add(q);

    printf("\nRemoving 2 numbers from the queue\n");
    dequeue(q);
    dequeue(q);
    display(q);
    add(q);



    return 0;
}