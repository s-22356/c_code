#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char s[25];
    gets(s);
    int i,j;
    for(i=0;s[i];i++)
    {
        if(s[i]==s[i+1])
        {
            s[i]=s[i+1];

        }
        for(i=0;s[i];i++)
        {
            printf("%c",s[i]);
        }

    }
}
