/*
5. Write a C program to count the number of elements in a queue.
Expected Output:

Initialize a queue!
Check the queue is empty or not? Yes
Number of elements in queue: 0

Insert some elements into the queue:
Queue elements are: 1 2 3 
Number of elements in queue: 3

Delete two elements from the said queue:
Queue elements are: 3 
Number of elements in queue: 1

Insert another element into the queue:
Queue elements are: 3 4 
Number of elements in the queue: 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

int front = -1;
int back = -1;
int queue[MAX_SIZE];

int is_empty() {
    if (front == -1 || front > back) return 1;
    else return 0;
}

void display() {
    printf("\nQueue: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int number) {
    if (back == MAX_SIZE - 1) {
        printf("Error: Queue is full\n");
    }
    if (front == -1) {
        front = 0;
    }
    back++;
    queue[back] = number;
}


int main() {
    if (is_empty() == true) {
        printf("Initialize the queue!\n");
        printf("Check if queue is empty: %s", is_empty() ? "Yes":"No");

        int size;
        printf("\nEnter the size of the queue: ");
        scanf("%d", &size);

        int sum = 0;
        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(number);

            sum += queue[i];
        }
        display();
        printf("Sum: %d\n", sum);

        enqueue(5);
        display();

        printf("Sum: %d\n", sum);

    }

    return 0;
}