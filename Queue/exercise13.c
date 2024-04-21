/*
13. Write a C program to find the median of the elements in a queue. >
From Wikipedia,
In statistics and probability theory, the median is the value separating the higher half from the lower half of a data sample, a population, or a probability distribution.
The median of a finite list of numbers is the "middle" number, when those numbers are listed in order from smallest to greatest.
If the data set has an odd number of observations, the middle one is selected. For example, the following list of seven numbers,
1, 3, 3, 6, 7, 8, 9 has the median of 6, which is the fourth value.
If the data set has an even number of observations, there is no distinct middle value and the median is usually defined to be the arithmetic mean of the two middle values. For example, this data set of 8 numbers1, 2, 3, 4, 5, 6, 8, 9 has a median value of 4.5, that is (4+5)/2 . (In more technical terms, this interprets the median as the fully trimmed mid-range).
Expected Output:

Input some elements into a queue:
Queue elements are:
1 2 3 4 5 
The median of the elements in the queue is 3.000000

Input one more element:
Queue elements are:
1 2 3 4 5 6 
The median of the elements in the queue is 3.500000
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

void display(Queue* q) {
    for (int i = q->front; i <= q->back; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

/*
Sorting funciton required
Why? When calculating the median, half of the values are greater, half are less. We are finding the middle value
Two scenarios:
1. Find median of array with even number of integers
2. Find media of array with odd number of integers (middle value)
*/

int median_even(Queue* q) {
    int size = q->back - q->front;
    return size % 2 == 0;
}

void median(Queue* q) {
    int size = q->back - q->front + 1;
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            temp = q->queue[i];
            q->queue[i] = q->queue[j];
            q->queue[j] = temp;
        }
    }
    if (median_even(q)) {
        printf("The array is of even length\n");
    }
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
    q->queue[q->back++] = number;
}

int main() {
    int size;
    Queue* q = create_queue();

    if (is_empty(q)) {
        printf("Initalize the queue!\n");
        printf("Size of queue: ");
        scanf("%d", &size);
        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(q, number);
        }
    }

    if (median_even(q)) {
        printf("Queue is of even length\n");
        

    return 0;
}