/*
1. Write a C program to implement a queue using an array. Programs should contain functions for inserting elements into the queue, displaying queue elements, and checking whether the queue is empty or not.
Expected Output:

Initialize a queue!
Check the queue is empty or not? Yes

Insert some elements into the queue:
Queue elements are: 1 2 3 

Insert another element into the queue:
Queue elements are: 1 2 3 4 

Check the queue is empty or not? No  
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100

int front = -1;
int back = -1;
int queue[MAX_SIZE];

void display() {
    for (int i = front; i <=back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int number) {
    if (front == -1 || front > back) { // if queue is empty, set it to 0
        front = 0;
    }

    back++;
    queue[back] = number;
}

int is_empty() {
    if (front == 1 || front > back) return 1;
    else return 0;
}

int main() {
    if()
    return 0;
}