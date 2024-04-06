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
    if (front == -1 || front > back) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int is_empty() {
    if (back == -1 || front > back) return 1;
    else return 0;
}

// inserting integers into the queue
void enqueue(int number) {
    if (back == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0; // if queue is empty, initialize the queue at 0
    }

    back++;
    queue[back] = number;
}

int main() {
    int size, size2;
    int *arr = calloc(size, sizeof(int));
    int length = 0;
    printf("Is the queue empty? %s", is_empty() ? "Yes\n":"No\n");

    if (is_empty() == true) {
        printf("Initialize the queue!\n");
        printf("Enter the size of the queue: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
            int number;
            printf("Element-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(number);

            length += i;
        }

        display();

        
        printf("Insert number of elements to add to the queue: ");
        scanf("%d", &size);
        printf("%d elements will be added...\n", size);

        for (int i = front; i < size; i++) {
            int new_elements;
            printf("Element-%d: ", i + 1);
            scanf("%d", &new_elements);
            enqueue(new_elements);
        }


        
        // printf("Element-%d: ", size + 1);
        // scanf("%d", &new_elements);
        // enqueue(new_elements);

        
        display();




    }
    

    return 0;
}