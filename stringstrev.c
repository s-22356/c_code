#include<stdio.h>
#include<conio.h>
int main()
{

    char str[5];
    printf("enter a string : " );
    gets(str);
    printf("%s",strrev(str));
    getch();
}
