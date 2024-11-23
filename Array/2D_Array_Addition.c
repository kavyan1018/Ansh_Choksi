// Find the Maxrix of 2D Array Addition
#include <stdio.h>
#include <conio.h>

void main(){
    
    int a[2][2],b[2][2],c[2][2];
    int i,j;

    printf("Enyer Array a:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enyer Array b:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of 2D Array is:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}