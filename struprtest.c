#include<stdio.h>
#include<string.h>
main()
{
    char str1[10]="ABCX",str2[10]="FBHD";
    int l;
    l=strcmp(str1,str2);
    printf("%d",l);
    getch();
}
