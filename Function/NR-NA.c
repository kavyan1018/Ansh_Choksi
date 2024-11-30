// No return type no argument

#include <stdio.h>
#include <conio.h>
int addfun();
int subfun();
int mulfun();
int divfun();

void main()
{
    int choice;
    
    printf("Enter the choice : \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addfun();
        break;
    
    case 2:
        subfun();
        break;

    case 3:
        mulfun();
        break;

    case 4:
        divfun();
        break;
    }
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

int subfun()
{
    int a,b, x;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    x = a - b;

    printf("The sum of a and b is : %d", x);

    return x;
}

int mulfun()
{
    int a,b, x;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    x = a * b;

    printf("The sum of a and b is : %d", x);

    return x;
}

int divfun()
{
    int a,b, x;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    x = a / b;

    printf("The sum of a and b is : %d", x);

    return x;
}