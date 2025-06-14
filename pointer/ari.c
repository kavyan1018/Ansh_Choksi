//     --> pointer arithmetic: it is used to perform arithmetic operations on pointers in c.

#include <stdio.h>
#include <conio.h>


void main()
{
    int *a, *b, sum=0;
    int num1, num2;

    printf("Enter two Numbers : ");
    scanf("%d %d", &num1, &num2);

    // Pointer Arithmetic
    
    a = &num1; // Pointer to num1
    b = &num2; // Pointer to num2

    sum = *a + *b; // Dereferencing pointers to get values and adding them

    printf("Sum of two numbers is : %d\n", sum);
}