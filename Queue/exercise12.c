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

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->back = -1;
    return q;
}

int compare(int a, int b) {
    return a > b;
}

void sort(Queue* q) {
    int temp;
    for (int i = q->front; i <= q->back; i++) {
        for (int j = q->front + 1; j <= q->back; j++) {
            if (compare(q->queue[i], q->queue[j])) {
                temp = q->queue[i];
                q->queue[i] = q->queue[j];
                q->queue[j] = temp;
            }
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

void enqueue(Queue* q, int number) {
    if (is_full(q)) {
        printf("Queue is full\n");
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
        printf("Queue is empty...unable to dequeue\n");
    }
    q->front++;
}


int main() {
    Queue* q = create_queue();
    int size;
    if(is_empty(q)) {
        printf("Initialize the queue!\n");
        printf("Enter the size of the queue: ");
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

    sort(q);

    display(q);

    return 0;
}