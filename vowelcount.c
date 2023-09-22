#include<stdio.h>
#include<string.h>
int vowelcount(char A1[]);
int main()
{
    char s1[20]={'S','U','D','I','I','O','P'};
    int l;
    l=vowelcount(s1);
    printf("%d",l);
    getch();

}
int vowelcount(char A1[])
{
    char B1[5]={'A','E','I','O','U'};
    int i=0,j,count=0;
  while(B1[i])
  {
      j=0;
      while(A1[j])
    {
        if(B1[i]==A1[j])
        {
            count++;
        }
        j++;
    }
    i++;
  }
return count;

}
