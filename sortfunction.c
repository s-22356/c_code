#include<stdio.h>
#include<stdio.h>
void arraysort(int b[],int size);
void main()
{
    int a[8];
    arraysort(a,8);
    getch();
}
void arraysort(int b[],int size)
{
    int i,r,temp;
    printf("Enter 7 number :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }

    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }
    for(i=0;i<=size-1;i++)
    {
        printf("%d\t",b[i]);
    }

}

