#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    char name[8][20];
    int i=0,j,count=0;
    printf("Enter your string :");
    for (i = 0; i <=7; i++)
    {
        gets(name[i]);
    }
    for(i=0;i<=7;i++)
    {
        printf("%s ",name[i]);
    }
        for(i=0;i<=7;i++)
        {
            for(j=0;name[i][j];j++)
            {
               if(name[i][j]=='a'||name[i][j]=='e'||name[i][j]=='i'||name[i][j]=='o'||name[i][j]=='u')
                    {
                            count++;
                    }
            }
        }

     printf("%d",count);

}


