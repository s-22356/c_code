#include<stdio.h>
#include<conio.h>
#include<string.h>
int countCharacter( char str1[],char ch1[]);
int main()
{
    char ch[1],str[10];
    int v;
printf("enter  a string :");
scanf("%s",&str);
printf("enter a character:");
scanf("%s",&ch);
v=countCharacter(str,ch);
printf("%d",v);

}
int countCharacter( char str1[],char ch1[])
{
    int i,j=0,count=0;
    for(i=0;i<=str1[i];i++)
    {
        if(ch1[j]==str1[i])
        {
            return i;
        }
    }

}
