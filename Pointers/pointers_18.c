/*
18. Write a program in C to demonstrate the use of pointers to structures.
Expected Output :

 John Alter from Court Street
*/
#include <stdio.h>

struct Employee{
    char *name;
    int emp_id;
};

int main() {
    printf("This program combines pointers and structs\n");
    
    static struct Employee emp1 = {"Brad", 1001}, emp2 = {"Scott", 1002}, emp3 = {"Matthew", 1003};
    struct Employee (*arr[]) = {&emp1, &emp2, &emp3};
    struct Employee (*(*pt)[3]) = &arr;

    printf("Employee Name : %s \n", (**(*pt + 1)).name);


    return 0;
}