//Write a function that accepts pointers as parameters. Pass variables by
//reference using pointers and modify their values within the function.

#include<stdio.h>
void ptr(int *p){
     *p =10;
   printf("value of *p is %d\n",*p);
}
int main(){
    int a=5,*b;
    b = &a;
    ptr(b);
    return 0;
}