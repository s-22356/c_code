#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50],temp;
    int i;
    printf("enter a string : ");
    printf("%d\n",strlen(gets(str)));
    for(i=0;i<strlen(str);i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    for(i=0;i<strlen(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
    for(i=0;i<strlen(str);i++)
    {
        printf("%c",str[i]);
    }
    getch();
}
