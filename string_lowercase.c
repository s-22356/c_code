#include<stdio.h>
#include<conio.h>
main()
{
    char str[8]={'A','S','D','T','Y','Q','U'};
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]+32);
        }
    }
    getch();

}
