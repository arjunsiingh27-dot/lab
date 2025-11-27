// 1. Declare different types of pointers (int, float, char) and initialize them with the
//  addresses of variables. Print the values of both the pointers and the variables
//  they point to.
#include <stdio.h>
int main()
{
    int a = 10, *p;
    float b = 4.5, *x;
    char c = 'a', *y;
    p = &a;
    x = &b;
    y = &c;
    printf("value of variable a is: %d\n", a);
    printf("value of variable b is: %f\n", b);
    printf("value of variable c is: %c\n ", c);

    printf("value of pointer p is: %d\n", *p);
    printf("value of pointer x is: %f\n", *x);
    printf("value of pointer y is: %c\n", *y);

    printf("address of pointer p is: %x\n", *&p);
    printf("address of pointer x is: %x\n", *&x);
    printf("address of pointer y is: %x\n", *&y);

    return 0;
}