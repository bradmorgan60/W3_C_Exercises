#include <stdio.h>

/*
. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z          
*/

int main() {
    int m = 300;
    float fx = 300.600006;
    char cht[] = "z";

    printf("Demonstrate the use of * and & operator: \n");
    printf("----------------------\n");
    printf("Pointers using the & operator: \n");

    printf("%p\n", &m);
    printf("%p\n", &fx);
    printf("%p\n", &cht);

    printf("----------------------\n");
    printf("Pointers using the * operator: \n");
    int *ptr_m = &m;
    float *ptr_fx = &fx;
    char *ptr_cht = &cht; 

    printf("m = %d\n", *(&m));
    printf("fx = %lf\n", *(&fx));
    printf("cht = %s\n", *(&cht));

    printf("----------------------\n");
    printf("Using only pointer variable: \n");

    printf("Address of m : %p\n", ptr_m);
    printf("Address of fx : %p\n", ptr_fx);
    printf("Address of cht: %p\n", ptr_cht);

     printf("----------------------\n");
    printf("Using only pointer operator: \n");

    printf("Address of m : %d\n", *ptr_m);
    printf("Address of fx : %lf\n", *ptr_fx);
    printf("Address of cht: %c\n", *ptr_cht);








    


    


    return 0;
}