#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3];
    int i, j;

    // clrscr();


    printf("Enter the nine elements:\n");

    // 2D array input from user
    for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
	    scanf("%d", &a[i][j]);
	}
    }

    printf("The 2D array is:\n");

    // 2D array output
    for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
	    printf("%d ", a[i][j]);
	}
	printf("\n");
    }

    // getch();
}