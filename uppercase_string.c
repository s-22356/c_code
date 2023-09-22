#include<stdio.h>
#include<conio.h>
main()
{
    char str[20]={'a','s','d','t',' ','y','q','u'};
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c",str[i]-32);
        }
    }
    getch();

}
