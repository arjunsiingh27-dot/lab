// WAP to read a list of integers and store it in a single dimensional array. Write a
// C program to print the second largest integer in a list of integers.
#include<stdio.h>
int main(){
    int n;
     printf("enter the value of n: "); // n will denote the number of element in the list or array .
    scanf("%d",&n);
    int arr[n];
    int i=0;
    printf("enter the %d elements :\n",n); // it will take the input i.e elements and will store them in the array
    for(i =0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("single dimensional array is :");// it will print the elements 
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}