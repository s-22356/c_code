#include<stdio.h>
void frequency_Array(int b[],int size);
void frequency_Display(int b[],int size);
void main()
{
    int a[10];
    frequency_Array(a,10);
    frequency_Display(a,10);
}
void frequency_Array(int b[],int size)
{
    int i,r,temp;
    printf("enter the value of each indexes : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    for(r=1;r<=size;r++)
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
printf("after sorting the elements are : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}
void frequency_Display(int b[],int size)
{
    int i=0,j,count;
   while(i<size)
{
    count=1;
    j=i+1;
    while(j<size && b[i]==b[j])
    {
        count++;
        j++;
    }
    printf("%d--%d\n",b[i],count);
    i=j;
}
}


