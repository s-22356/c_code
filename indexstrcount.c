#include<stdio.h>
#include<conio.h>
#include<string.h>
int strindexfirst(char s1[],char ch1);
int main()
{
    int l;
    char ch,str[10];
    printf("enter a  string:");
    gets(str);
    printf("enter a character:");
    scanf("%c",&ch);
    l=strindexfirst(str,ch);
    printf("%d",l);
}
int strindexfirst(char s1[],char ch1)
{
    int i,count=0;
    for(i=0;s1[i];i++)
    {
        if(ch1==s1[i])
        {
            count++;
        }
    }
    return count;
}
