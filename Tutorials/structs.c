#include <stdio.h>
#include <stdlib.h>

/*
Learning how to combine structs and pointers today
*/

struct Person {
        char name[50];
        int age;
    };


int main() {

    struct Person person1 = {"Brad Morgan", 27};
    struct Person *ptrPerson = &person1;

    printf("Name: %s \n", ptrPerson -> name);
    printf("Name: %d \n", ptrPerson -> age);







    return 0;
}