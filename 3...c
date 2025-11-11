//Develop a recursive function FIBO (num) that accepts an integer argument.
//Write a C program that invokes this function to generate the Fibonacci
//sequence up to num.
int FIBO(int n); // n will tell the number of terms 
#include<stdio.h>
int main(){
    int num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    printf("fibonacci series upto %d is %d\t",num,FIBO(num));
    return 0;
}
int FIBO(int n){
    
    if(n==0){
     return 0;
    }else if(n==1){
        return 1;
    }
    return FIBO(n-1)+FIBO(n-2);
}