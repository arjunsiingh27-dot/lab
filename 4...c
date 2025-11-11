void primenum(int n);
#include<stdio.h>
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    primenum(num);
 return 0;
}
void primenum(int n){
    int i,isprime=1;
    for(i=2;i<=n/2;i++){
       if(n%i==0){
        isprime=0;
        break;   
    }
}
       if(isprime==1){
        printf("%d is a primenumber ",n);
       }
       else{
        printf("%d is not a prime number",n);
       }
       
return ;
}