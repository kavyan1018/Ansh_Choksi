#include<stdio.h>


int main()
{
    int x = 10;
    int *ptr; // Pointer declaration to int


    ptr = &x;


    printf("Value of x: %d\n", x); // Print value of x
    printf("Address of x: %p\n",&x); // Print address of x
    printf("Value of ptr: %p\n", ptr); // Print value of ptr (address of x)
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereference ptr to get value of x
}