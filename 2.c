//Declare a local variable inside a function and try to access it outside the
//function. Compare this with accessing the global variable from within the
//function.
#include <stdio.h>

//  Global variable
int x = 10;

void fun() {
    int y = 20;   //  Local variable
    printf("Inside fun(): x = %d\n", x); // global variable
    printf("Inside fun(): y = %d\n", y); // local variable
}

int main() {
    printf("Inside main(): x = %d\n", x); // global variable
    // printf("Inside main(): y = %d\n", y); 
    fun();
    return 0;
}