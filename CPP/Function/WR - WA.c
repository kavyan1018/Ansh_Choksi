//With Return type With argument 


#include <stdio.h>
#include <conio.h>
int addfun(int no1, int no2);
void main()
{
    int ans, no1, no2;
    
    ans = addfun(no1, no2);
    printf("\n Addition is : %d", ans);
  
}

int addfun(int no1, int no2)
{
    int ans;

    printf("\nEnter the value of no1 : ");    
    scanf("%d", &no1);

    printf("\nEnter the value of no2 : ");
    scanf("%d", &no2);

    ans = no1 + no2;

}