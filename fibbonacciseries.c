main()
{
    int n,f1=0,f2=1,f3,s=0;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    while(n)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
        n--;
    }
}
