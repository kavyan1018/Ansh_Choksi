//  Row wise  sum of two dimensional arrays 
/*
    1   1   1   1       => 4   
    2   2   2   2       => 8
    3   3   3   3       => 12
---------------------------------
                        => 24
*/


#include <stdio.h>
#include <conio.h>
void main(){
    int a[3][4],i,j,sum=0,gt=0;

    
    printf("Enter the 12 elements of the array: \n");

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your Matrix is here: \n");

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
            sum = sum + a[i][j];
        }
        printf("=> %d\n",sum);
        gt = gt + sum;
        printf("\n");
    }
    printf("\t\t\t\t = %d",gt);
}