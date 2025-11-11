//WAP to read a list of integers and store it in a single dimensional array. Write a
//C program to find the frequency of a particular number in a list of integers.
#include<stdio.h>
void repeatnum(int arr[],int n);
int main(){
    int arr[] = {1,2,3,3,4,4};
    repeatnum(arr,6);
    return 0;

}
void repeatnum(int arr[],int n){
    int count =0,i;
    for (i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    printf("\n%d is repeated %d times ",arr[i],count);
    }
    
} 