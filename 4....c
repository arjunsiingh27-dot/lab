//Create a union containing 6 strings: name, home_address, hostel_address,
//city, state and zip. Write a C program to display your present address.

#include <stdio.h>
#include <string.h>

union address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union address a;

    // Enter present address (home address example)
    strcpy(a.name, "Arjun Singh");
    printf("Name: %s\n", a.name);

    strcpy(a.home_address, "123, Green Street");
    printf("Home Address: %s\n", a.home_address);

    strcpy(a.city, "Delhi");
    printf("City: %s\n", a.city);

    strcpy(a.state, "Delhi NCR");
    printf("State: %s\n", a.state);

    strcpy(a.zip, "110001");
    printf("ZIP: %s\n", a.zip);

    return 0;
}