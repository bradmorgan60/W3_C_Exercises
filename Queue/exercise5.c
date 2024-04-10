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

/*
Functions needed:
1. Display the current queue
2. Append integer to back of queue
3. Remove integer from queue
4. Count elements in queue
5. Main function
*/

void display() {
    printf("Queue: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    return 0;
}