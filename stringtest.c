#include<stdio.h>
main()
{
    char str[50];
    printf("enter a string : ");
    gets(str);
    char i;
    int j,count=0;
    printf("enter a character : ");
    scanf("%c",&i);
    for(j=0;str[j]!='\0';j++)
    {
        if(i==str[j])
        {
            count++;
        }
    }
    printf("sequence of character is ----%d",count);
    getch();
}

