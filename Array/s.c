#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i, j, temp;
    // clrscr();
    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Descending order: ");
    for (i = 0; i <= 4; i++)
        printf("%d ", a[i]);
    // getch();
}