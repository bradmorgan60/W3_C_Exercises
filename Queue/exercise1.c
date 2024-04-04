#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100
// need to set some global variables before we put these into the functions

// -1 because this represents an empty array
int front = -1;
int back = -1;
int queue[MAX_SIZE];

// function to insert elements into the queue...will eventually pass into a for loop for user input
void enqueue(int item) {
    if (back == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    } 
    if (front == -1) {
        front = 0;
    }
    back++;
    queue[back] = item;
}

// function to display the current queue
void display() {
    int size;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        int number;
        printf("Element-%d: ", i + 1);
        scanf("%d", &number);
        enqueue(number);
    }
    printf("Queue elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// function to check if the queue is empty or not
int is_empty() {
    if (front == -1 || front > back) {
        return 1;
    }
    return 0;
}

int main() {
    printf("Empty queue? %s\n", is_empty() ? "Yes":"No \n");

    if (is_empty() == true) {
        printf("Initialize the queue!\n");
        display();
    }
    
    printf("Empty queue? %s\n", is_empty() ? "Yes":"No \n");



    return 0;
}

