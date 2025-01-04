//With Return type no argument 


#include <stdio.h>
#include <conio.h>
int addfun();
void main()
{
    int ans;
    
    ans = addfun();
    printf("\n Addition is : %d", ans);
  
}

int addfun()
{
    int no1, no2, ans;

    printf("\nEnter the value of no1 : ");    
    scanf("%d", &no1);

    printf("\nEnter the value of no2 : ");
    scanf("%d", &no2);

    ans = no1 + no2;

}