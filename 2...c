// Develop a recursive function GCD (num1, num2) that accepts two integer
// arguments. Write a C program that invokes this function to find the greatest
// common divisor of two given integers.
int gcd(int a, int b);
#include<stdio.h>
int main(){
    int num_1,num_2;
    printf("enter the value of num_1 and num_2: ");
    scanf("%d %d",&num_1,&num_2);
    printf("gcd of %d and %d is %d\n",num_1,num_2,gcd(num_1,num_2));
    return 0;
}
int gcd(int a,int b){
   if(b==0){
    return a;
   }
    return gcd(b,a%b);
}