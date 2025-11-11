//Declare variables within different code blocks (enclosed by curly braces) and
//test their accessibility within and outside those blocks.
#include <stdio.h>

int main() {
    int x = 10;   // declared in main block
    printf("x inside main block = %d\n", x);

    {  // inner block starts
        int y = 20;   // declared only inside this block
        printf("x inside inner block = %d\n", x);
        printf("y inside inner block = %d\n", y);
    }  // inner block ends 

    // printf("y outside block = %d\n", y);  
    printf("x outside block = %d\n", x);   

    return 0;
}