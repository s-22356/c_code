#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    char name[3][10];
    int i=0,j,count=0;
    printf("Enter your string :");
    for (int i = 0; i <=2; i++)
    {
        gets(name[i]);
    }
    for(i=0;i<=2;i++)
    {
        printf("%s ",name[i]);
    }
        for(i=0;i<=2;i++)
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


