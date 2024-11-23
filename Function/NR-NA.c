// No return type no argument

#include <stdio.h>
#include <conio.h>
int addfun();
void main()
{
    addfun();

}

int addfun()
{
    int a,b, x;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    x = a + b;

    printf("The sum of a and b is : %d", x);

    return x;

}