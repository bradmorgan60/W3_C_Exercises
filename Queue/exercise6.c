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

int front = -1;
int back = -1;
int queue[MAX_SIZE];

void display() {
    printf("\nQueue: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void reverse() { // this function is causing the issue...it is reading the original array and printing one number right to left each time called
    printf("Reversal: ");
    int i;
    for (i = front; i <= back / 2; i++) {
        int temp = queue[front];
        queue[front] = queue[back];
        queue[back] = queue[temp];
    }
    printf("%d", queue[i]);
}

int is_empty() {
    if (front == -1 || front > back) return 1;
    else return 0;
}

void enqueue(int number) {
    if (back == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1 || front > back) {
        front = 0;
    }
    back++;
    queue[back] = number;
}

void dequeue() {
    printf("\nDequeue: ");
    if (front == -1 || front > back) {
        printf("Queue is empty\n");
        return;
    }
    front++;
}

int main() {
    int size, *arr;

    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        int number;
        printf("Element-%d: ", i+1);
        scanf("%d", &number);
        enqueue(number);
    }

    display();
    reverse();
    

    enqueue(100);
    enqueue(300);
    display();

    dequeue();
    dequeue();
    display();

    reverse();
    

    return 0;
}