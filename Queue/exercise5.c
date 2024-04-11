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

// if the queue is full, no more integers will be allowed
void enqueue(int number) {
    if (back == MAX_SIZE - 1) {
        printf("Queue is full. No more integers may be added\n");
        return;
    }
    if (front == -1) {
        front = 0;  // if the queue is empty, we will begin the count at 0
    }
    back++;
    queue[back] = number;
}

void dequeue(int number) {
    if (front == -1 || front > back) {
        printf("Queue is empty\n");
        return;
    }
    front++;
    // queue[front] = number;
}

// The purpose of the int function is so we can incorporate the function in to a printf statement. Just need to return the count
int count() {
    int size = 0;
    if (back != -1 && front != -1) {
        for (int i = front; i <= back; i++) {
            size++;
        }
    }
    return size;
}

int is_empty() {
    if (front == -1 || front > back) return 1;
    else return 0;
}

int main() {
    if (is_empty() == true) {
        int size;
        printf("Initialize the queue!\n");
        printf("Enter the size of the queue: ");
        scanf("%d", &size);
        
        for (int i = 0; i < size; i++) {
            int number;
            printf("Num-%d: ", i + 1);
            scanf("%d", &number);
            enqueue(number);
        }

        display();
        printf("Number of elements: %d\n", count());

        int size2;
        printf("Enter number of elements to remove: ");
        scanf("%d", &size2);

        for (int i = front; i < size2; i++) {
            int remove;
            printf("Remove-front: %d: ", i + 1);
            scanf("%d", &remove);
            dequeue(remove);
        }

        display();
        printf("Number of elements: %d\n", count());

    }

    return 0;
}