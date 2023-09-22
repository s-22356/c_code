int smallindex(int b[],int size);
int main()
{
    int a[5],x;
    x=smallindex(a,5);
    printf("The index of smallest element %d",x);
    getch();
}
int smallindex(int b[],int size)
{
    int i,min,v;
    printf("enter 5 number:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(i=1;i<size;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
            v=i;
        }
    }
    return v;

}
