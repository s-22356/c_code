#include<stdio.h>
#include<string.h>
main()
{
    char str[10];
    int l;
    printf("enter a string");
    gets(str);
    l=strlen(str);
    printf("%d",l);
}
