//Write a program to apply left shift and right shift operator.
#include <stdio.h>

int main() {
    int num, left, right, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    // Bitwise shifts
    left = num << shift;   // Left Shift
    right = num >> shift;  // Right Shift

    printf("\n===== Shift Results =====\n");
    printf("Original number      = %d\n", num);
    printf("Left Shift  (num << %d)  = %d\n", shift, left);
    printf("Right Shift (num >> %d)  = %d\n", shift, right);

    return 0;
}