// what is String in c programing ?
// String is a sequence of characters. In C programming, a string is a sequence of characters terminated with a null character \0. For example: char c[] = "hello";


/*#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char ch[20] = "Hello_Kavyan !";

    printf("The string is : %s\n", ch);
}*/


#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];

    printf("Enter the string: ");
    scanf("%s", ch);

    printf("The string is : %s\n", ch);
    return 0;
}