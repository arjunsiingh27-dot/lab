//Declare a global variable outside all functions and use it inside various functions
//to understand its accessibility.

#include <stdio.h>

// Global variable
int num = 5;

void show() {
    printf("Inside show(): num = %d\n", num);
}

void change() {
    num = 10;  // modifying global variable
    printf("Inside change(): num = %d\n", num);
}

int main() {
    printf("Inside main(): num = %d\n", num);
    show();     // use global variable
    change();   // modify global variable
    show();     // check updated value
    return 0;
}
