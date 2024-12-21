// --> No return type with argument    => NR WA

#include <stdio.h>
#include <conio.h>

void addfun(int no1, int no2);
void main()
{
    int no1, no2;

    printf("\nEnter the value of no1 : ");    
    scanf("%d", &no1);

    printf("\nEnter the value of no2 : ");
    scanf("%d", &no2);

    addfun(no1,no2);

}

void addfun(int no1, int no2)
{
    int ans;

    ans = no1 + no2;

    printf("\nThe sum of no1 and no2 is : %d", ans);


}
