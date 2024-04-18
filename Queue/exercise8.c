/*
8. Write a C program to compute the average value of the elements in a queue.
Expected Output:

Queue elements are: 1 2 3 4 5 
Average of the elements in the queue is: 3.000000

Remove 2 elements from the said queue:
Queue elements are: 3 4 5 
Average of the elements in the queue is: 4.000000

Insert 3 more elements:
Queue elements are: 3 4 5 300 427 519 
Average of the elements in the queue is: 209.666672
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int front;
    int back;
    int queue[MAX_SIZE];

} Queue;

/*
Functions needed:
1. Display (void)
2. Enqueue (add integers to queue) - void
3. Dequeue (remove integers from queue, left to right) - 
4. Average (float) - return the average (sum of queue / number of integers)
5. Check queue if empty
6. Check queue if full
7. Create queue
8. Add (int) - add all integers in a queue
*/

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
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
    if (isFull(q)) {
        printf("Queue is full\n");
    }
    if (q->front == -1 || q->front > q->back) {
        q->front = 0;
    }

    q->back++;
    q->queue[q->back] = number;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        q->front++;
    }
}

int sum(Queue* q) {
    int size, sum = 0;
    for (int i = 0; i < size; i++) {
        sum += q->queue[i];
    }
    return sum;
}

float average(int size, int sum) {
    float average = sum / size;
    return average;
}

int main() {
    Queue* q = create_queue();
    int size;
    if(isEmpty(q)) {
        printf("Initialize the queue!\n");
        printf("Specify the size of the queue: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(q, number);
        }
        
    }
    printf("Queue: ");
    display(q);

    // float avg = average(size, sum(q));
    int my_sum = sum(q);
    float my_average = average(size, my_sum);

    printf("Average: %lf\n", my_average);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("New queue: ");
    my_sum = sum(q);
    my_average = average(size, my_sum);

    display(q);
    printf("Average: %lf\n", my_average);

    dequeue(q);
    dequeue(q);
    
    printf("New queue: ");
    display(q);
    my_sum = sum(q);
    my_average = average(size, my_sum);

    printf("Average: %lf\n", my_average);

    return 0;
}