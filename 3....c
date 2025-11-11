//Create a Book structure containing book_id, title, author name and price.
//Write a C program to pass a structure as a function argument and print the
//book details.
#include<stdio.h>

struct book{
   char book_id[20];
   char title[30];
   char author_name[20];
   int price;
};
int main(){
    struct book b1;
    printf("enter the details of book b1: ");

    scanf("%s\n",&b1.book_id);
    scanf("%s\n",&b1.title);
    scanf("%s\n",&b1.author_name);
    scanf("%d\n",&b1.price);

    printf("details of book b1 are: ");
    printf("book_id is: %s\n",b1.book_id);
    printf("title is: %s\n",b1.title);
    printf("author name is: %s\n",b1.author_name);
    printf("price is: %d\n",b1.price);
    
    return 0;
}