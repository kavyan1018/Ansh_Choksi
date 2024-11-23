// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int a[5] = {10,20,30,40,50};

//     printf("Your Array is :- %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);   
// }


// Usear throw input
/*
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5];

    printf("Enter the 5 Values :");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    printf("Your Array is :- %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);   
}
*/


// array using  loop 
/*
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i;

    printf("Enter the 5 Values :");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nYour Array is :-");
    for (i = 1; i <= 5; i++)
    {
        printf("%d",a[i]);
    }
    
}
*/

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n], odd[n], even[n];
    int odd_count = 0, even_count = 0;
    
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }
    
    printf("Even numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    
    printf("Odd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    
    return 0;
}
