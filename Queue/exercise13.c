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
    int size;
} Queue;

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

int is_full(Queue* q) {
    return q->back == MAX_SIZE - 1;
}

int is_empty(Queue* q) {
    return q->front == -1;
}

int is_even(Queue* q) {
    return q->size % 2 == 0;
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

int compare(int a, int b) {
    return a > b;
}

void median(Queue* q) {
    q->size = q->back - q->front + 1;
    int temp[q->size];

    for (int i = 0; i < q->size; i++) {
        temp[i] = q->queue[q->front + 1];
    }

    // sort the array
    for (int i = 0; i < q->size; i++) {
        for (int j = i + 1; j < q->size; j++) {
            if (compare(q->queue[i], q->queue[j])) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    if (is_even(q)) {
        float median = (q->queue[q->size / 2] + q->queue[q->size / 2 - 1]) / 2;
        printf("Median: %lf\n", median);
    }
    else {
        float median = (q->queue[q->size / 2]);
        printf("Median: %lf\n", median);
    }
}

int main() {
    Queue* q = create_queue();
    q->size = q->back - q->front + 1;

    if (is_full(q)) {
        printf("Queue is full\n");
    }
    
    if (is_empty(q)) {
        printf("Initalize the queue!\n");
        printf("Enter size: ");
        scanf("%d", &q->size);
        for (int i = 0; i < q->size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(q, number);
        }

        if (is_even(q)) {
            printf("Length is even\n");
            display(q);
            median(q);

        } else {
            printf("Length is odd\n");
            display(q);
            median(q);
        }

    }


    return 0;
}