// Write a program to apply bitwise OR, AND and NOT operators on bit level. 
#include <stdio.h>
int main() {
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Bitwise operations
    int and_result = a & b;
    int or_result  = a | b;
    int not_a      = ~a;
    int not_b      = ~b;

    printf("\n===== Bitwise Results =====\n");
    printf("a AND b  (a & b)  = %d\n", and_result);
    printf("a OR b   (a | b)  = %d\n", or_result);
    printf("NOT a    (~a)     = %d\n", not_a);
    printf("NOT b    (~b)     = %d\n", not_b);

    return 0;
}
