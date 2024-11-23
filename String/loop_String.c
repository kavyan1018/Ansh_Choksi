// #include<stdio.h>
// #include<string.h>

// void main()
// {
//     char ch[50];

//     printf("Enter the string: ");
//     scanf("%s", ch);

//     printf("The string is : %s\n",ch);

//     for (int i = 0; i < strlen(ch); i++)
//     {
//         printf("%c\n", ch[i]);
//     }
// }

/*
    5 Students Detalis

    1. Name
    2. Age
    3. School
    4. Address
    5. Phone Number
using loop
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name[50], school[50], address[50], phone[50];
    int age, n, i;

    printf("Enter the number for taking input from user : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        printf("this is the %d student details\n", i + 1);

        printf("\nEnter the name: ");
        scanf("%s", name);

        printf("\nEnter the age: ");
        scanf("%d", &age);

        printf("\nEnter the school: ");
        scanf("%s", school);

        printf("\nEnter the address: ");
        scanf("%s", address);

        printf("\nEnter the phone number: ");
        scanf("%s", phone);

    }

    for (i = 0; i < n; i++)
    {
        printf("this is the %d student details\n", i + 1);
 
        printf("The name is : %s\n", name);
        printf("The age is : %d\n", age);
        printf("The school is : %s\n", school);
        printf("The address is : %s\n", address);
        printf("The phone number is : %s\n", phone);
    }
}