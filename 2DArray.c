#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
printf("enter 9 numbers for the Array 1 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("enter 9 numbers for the Array 2 : ");

for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("sum of array is :------------------------------------------\n");
for(i=0;i<3;i++)
    {
        printf("[");
        for(j=0;j<3;j++)
        {

            printf("%d ",c[i][j]);

        }
        printf("]");
        printf("\n");
    }
}
