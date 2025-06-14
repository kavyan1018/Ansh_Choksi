#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;
    FILE *fp;

    // fopen

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }


    // Input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Write to file

    fprintf(fp, "%d %d %d\n", a, b, c);

    // Close the file
    fclose(fp);

    // Reopen the file for reading
    fp = fopen("input.txt", "r");


}