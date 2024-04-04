#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
// need to set some global variables before we put these into the functions

// -1 because this represents an empty array
int front = -1;
int back = -1;
int queue[MAX_SIZE];

// function to insert elements into the queue
void enqueue() {
    if (back = MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    } 
    if (front = -1) {
        front = 0;
    }

}

// function to display the current queue
void display() {
    int size;
    printf("Current queue: ");
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
    }

}

// function to check if the queue is empty or not
int is_empty() {
    if (front = -1 || front > back) {
        return 1;
    }
    return 0;
}

int main() {
    printf("Initialize the queue!\n");

    return 0;
}

