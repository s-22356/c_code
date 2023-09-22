#include<stdio.h>
#include<conio.h>
void input(int b[],int size);
void display(int b[],int size);
void sort(int b[],int size);
void main()
{
    int a[10];
   input(a,10);
    printf("before sorting the numbers");
   display(a,10);

   sort(a,10);
   printf("after sorting the numbers");
   display(a,10);
   getch();
}
void input(int b[],int size)
{
    int i;
    printf("enter 10 numbers :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
}
void display(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
        printf("\n");
    }
}
void sort(int b[],int size)
{
    int i,temp,r;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-r;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }
}
