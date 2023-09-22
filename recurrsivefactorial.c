#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int x;
    x=fact(5);
    printf("%d",x);
    getch();
}
int fact(int n)
{
    int t;
    if(n>1)
    {
        t=n*fact(n-1);
        return t;
    }

}
