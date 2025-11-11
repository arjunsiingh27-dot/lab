//Declare a static local variable inside a function. Observe how its value persists
//across function calls.
#include <stdio.h>

void counter() {
    static int count = 0; // static variable 
    count++;
    printf("count = %d\n", count);
}

int main() {
    counter();  // 1st call
    counter();  // 2nd call
    counter();  // 3rd call
    return 0;
}