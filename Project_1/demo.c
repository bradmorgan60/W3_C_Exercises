#include <stdio.h>
#include <stdlib.h>
#include "demo.c"
#include <time.h>

struct Queue {
    int front; 
    int back;
    int data;
};