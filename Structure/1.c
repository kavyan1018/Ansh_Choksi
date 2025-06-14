// student data structure

#include <stdio.h>
#include <stdlib.h>

struct students{
    int Roll_No;
    char Name[30];
    int Age;w
};

int main()
{
    struct students s1;

    printf("Enter Roll No: ");
    scanf("%d", &s1.Roll_No);

    printf("Enter Name: ");
    scanf("%s", s1.Name);

    printf("Enter Age: ");
    scanf("%d", &s1.Age);


    printf("\n\nRoll No: %d\n", s1.Roll_No);
    printf("Name: %s\n", s1.Name);
    printf("Age: %d\n", s1.Age);

    return 0;
}