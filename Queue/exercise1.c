
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100


int back = -1;
int front = -1;
int queue[MAX_SIZE];

// use -1 because this signifies an empty array. 0 is seen as the first value in an array

void enqueue(int item) {
    if (back == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) { 
        front = 0;   // if the queue is empty, initialize the queue to 0
    }

    back++;
    queue[back] = item;
}

void display() {
    if (front == 1 || front > back) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements are: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int is_empty() {
    if (front == -1 || front > back) {
        return 1;
    }
    return 0;
}



int main() {
    printf("\nCheck if the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
    printf("\nInitialize the queue! \n");
    int num_elements;
    printf("Enter the number of elements to be added to the queue: ");
    scanf("%d", &num_elements);

    for (int i = 0; i < num_elements; i++) {
        int element;
        printf("Element-%d: ", i + 1);
        scanf("%d", &element);
        enqueue(element);
    }

    display();

    printf("Check if the queue is empty or not? %s", is_empty() ? "Yes" : "No");

    return 0;
}

