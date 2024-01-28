#include <stdio.h>

/*
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

int main()
{
    char emp_id;
    char * ptr_emp_id = &emp_id;

    // Employee ID 
    printf("Please enter your Employee ID: ");
    scanf("%s", ptr_emp_id);

    // Total Hours Worked
    double hours;
    double * ptr_hours = &hours;
    printf("Enter the number of hours worked this month: ");
    scanf("%lf", &hours);
    
    // Amount of Money Received per Hour
    double money;
    double * ptr_money = &money;
    printf("Enter your hourly rate: ");
    scanf("%lf", &money);

    double salary = money * hours;

    printf("Employee %s's total compensation this month: $ %.2lf \n", ptr_emp_id, salary);

    return 0;
}