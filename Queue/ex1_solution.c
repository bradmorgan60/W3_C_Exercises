#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// define global variables
int queue[MAX_SIZE];    // define max size of queue
int front = -1; // initialize front of queue
int back = -1; // initialize back of queue


int is_empty() {
    if (front == -1 || front > back) {
        return 1;
    }
    return 0; // return 0 if queue is NOT empty

}

void enqueue(int item) {
    if (back == MAX_SIZE - 1) {
        printf("Error: Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }

    back++;
    queue[back] = item;
}

void display() {
    if (front == -1 || front > back) {
        printf("Queue is empty...\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");

}

int main() {
    printf("Initialize the queue!\n");
    printf("Check if the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
    printf("\n");
    
    printf("Insert some elements into the queue: \n");
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();
    printf("Insert another element into the queue: \n");
    enqueue(4);
    display();

    printf("Check if the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");


    return 0;
}