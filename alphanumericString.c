#include<stdio.h>
#include<conio.h>
#include<string.h>
int alphanumeric(char str[]);
int main()
{
    char str1[10];
    int V;
    printf("enter a string : ");
    scanf("%s",&str1);
    V=alphanumeric(str1);
    if(V==1)
    {
       printf("alphanumeric number");
    }
    else
    {
        printf("not alphanumeric");
    }


}
int alphanumeric(char str[])
{
    int i,A=0,D=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            A=1;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            D=1;
        }
    }
    if(A && D==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
