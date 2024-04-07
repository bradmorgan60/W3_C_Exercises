/*
2. Write a C program to implement a queue using an array. Create a function that removes an element from the queue.
Expected Output:

Initialize a queue!
Insert some elements into the queue:
Queue elements are: 1 2 3 

Delete an element from the said queue:
Queue elements are: 2 3 

Insert another element into the queue:
Queue elements are: 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

int front = -1;
int back = -1;
int queue[MAX_SIZE];

void display() {
    int size;
    printf("Queue: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int number) {
    // appending a number to the queue
    if (front == MAX_SIZE - 1) {
        printf("Queue is full...no more values may be added\n");
    }
    if (front == -1) {
        front = 0;
    }
    
    back++;
    queue[back] = number;
}

int is_empty() {
    if (back == -1 || front > back) return 1;
    else return 0;
}

void dequeue() {
    // user needs to select an integer that exists in the queue so that it will be removed
    if (front == -1 || front > back) {
        printf("Error: Queue is empty\n");
        return;
    }
    front++;
}

int main() {
    int size;
    int *arr = calloc(size, sizeof(int));

    if (is_empty() == true) {
        printf("Initialize the queue!\n");
        printf("Enter the size of the queue: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            int number;
            printf("Element-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(number);
        }
        display();

        printf("Remove element from queue: ");
        dequeue();

        display();

        printf("Insert element into the queue\n");
        enqueue(5);
        display();
    }


    // display();

    return 0;
}