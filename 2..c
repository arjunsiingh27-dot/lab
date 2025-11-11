// WAP to read a list of integers and store it in a single dimensional array. Write a
// C program to count and display positive, negative, odd, and even numbers in
// an array.
void count_odd_even_pos_neg(int arr[],int n); // function declaration
#include<stdio.h>
int main(){
    int arr[]= {1,3,5,6,4,-2};
    count_odd_even_pos_neg(arr,6); //function call
    return 0;
}
   // function definition
void count_odd_even_pos_neg(int arr[],int n){
    int i,oddcount=0,evencount=0,poscount=0,negcount=0;
     // declaring parameter like odd and even count which will count number of odd and even number present in the array
    for(i=0;i<n;i++){
    if(arr[i]%2!=0){
        printf("odd number is :%d\n",arr[i]);
        oddcount++;
    }
    else{
        evencount++;
        printf("even number is :%d\n",arr[i]);
        }
    

     if(arr[i]>0){
        printf("positive number is :%d\n",arr[i]);
        poscount++;
     }else{
        negcount++;
        printf("negative number is :%d\n",arr[i]);
    }

}
    printf("total number of odd number in the array is %d\n",oddcount);
    printf("total number of even number in the array is %d\n",evencount);
     printf("total number of positive number in the array is %d\n",poscount);
    printf("total number of negative number in the array is %d\n",negcount);


    return  ;
}
