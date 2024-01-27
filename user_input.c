#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name;
    char * ptr_name = &name;  // using this pointer to save into memory. This is the first input used in the program

    int age;  // Why do we not have to use a pointer for all subsequent inputs? When I tried, this came with errors...but not segmentation errors
    // int * ptr_age = &age;
    double gpa;
    // double * ptr_gpa = &gpa;
    printf("Enter your name: ");
    scanf("%s", ptr_name);

    printf("Hello, %s. \n", ptr_name);

    // Error: segmentation fault. Must allocate memory to the variable after it is initialized. Where will the input be stored?

    printf("%s....enter your age: ", ptr_name);

    scanf("%d", &age); // this is an example of a pointer

     if(age >= 25) {
        printf("Good that you graduated %s...you must be the oldest in your class. Congrats, old head.", ptr_name);
    } else if(age >= 18 && age < 25) {
        printf("It's expected to graduate on time %s", ptr_name);
    } else if(age < 18) {
        printf("You are young...must be some type of prodigy...good work. Let's see that GPA to know for sure...");
    }  else {
        printf("Value not accepted...");
    }

    printf("\nEnter your GPA: ");
    scanf("%lf", &gpa);  // %lf is the user input for a double data type

    // printf("You are %d years old. Your GPA is %lf\n", age, gpa);

    if(gpa == 4.0) {
        printf("You graduated with Highest Honors and a perfect GPA!!");
    } else if(gpa >= 3.5 && gpa < 4.0) {
        printf("You graduated with Highest Honors!");
    } else if(gpa >= 3.0 && gpa < 3.5) {
        printf("You graduated with Honors...could have been better if you partied less.");
    } else if(gpa >= 0 && gpa < 3.0) {
        printf("Don't bother coming back home %s...", ptr_name);
    } else {
        printf("Value not accepted...");
    }

    return 0;
}

// Needed to intall the Code Runner extension for this to work....

