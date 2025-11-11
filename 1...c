// Develop a recursive and non-recursive function FACT(num) to find the
// factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
// = n * FACT(n-1). Using this function, write a C program to compute the
// binomial coefficient. Tabulate the results for different values of n and r with
// suitable messages. 

//non - recursive function
// #include<stdio.h>
// int main(){
//     int n;
//     long long factorial=1;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     if(n<0){
//         printf("factorial for negative number is not defined ");
//     }
//     else{
//     for(int i =1;i<=n;i++){
//         factorial *= i;
//     }
// }
//     printf("factorial of %d is %lld\n",n,factorial);
//     return 0;
// }
 // recursive function
   
int factorial(int n);
#include<stdio.h>
int main(){
    int number ;
    printf("enter the value of number: ");
    scanf("%d",&number);
    if(number<0){
        printf("factorial of negative number is invalid ");
    }
    else{
        printf("factorial of %d is %d\n",number,factorial(number));
    }

 return 0;
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n * factorial(n-1);
}