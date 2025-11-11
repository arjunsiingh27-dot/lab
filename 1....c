// 1.⁠ ⁠Write a C program that uses functions to perform the following operations:
// a. Reading a complex number.
// b. Writing a complex number.
// c. Addition and subtraction of two complex numbers
// Note: represent complex number using a structure.
#include<stdio.h>

struct complex { 
    float real ;
    float imaginary;
};

int main(){
    
    struct complex n1,n2,sum,diff;
    printf("enter the value of real part: ");
    scanf("%f",&n1.real);

    printf("enter the value of imaginary part: ");
    scanf("%f",&n1.imaginary);

    printf("enter the value of real part: ");
    scanf("%f",&n2.real);

    printf("enter the value of imaginary part: ");
    scanf("%f",&n2.imaginary);
    printf("complex number n1 = %0.2f + %0.2fi ",n1.real,n1.imaginary);
    printf("\ncomplex number n2 = %0.2f + %0.2fi",n2.real,n2.imaginary);
    
     // Addition of complex numbers
    sum.real = n1.real + n2.real;
    sum.imaginary = n1.imaginary + n2.imaginary;

    // Subtraction of complex numbers (n1 - n2)
    diff.real = n1.real - n2.real;
    diff.imaginary = n1.imaginary - n2.imaginary;

    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Difference = %.2f + %.2fi\n", diff.real, diff.imaginary);

  return 0;
}