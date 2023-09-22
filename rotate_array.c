main()
{
    int a[7],i,temp,shift_count;
    for(i=0;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter how many times you want to rotate the array: ");
    scanf("%d",&shift_count);
    while(shift_count)
    {
        temp=a[6];
        for(i=6;i>=1;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        shift_count--;
    }
     for(i=0;i<=6;i++)
    {
        printf("%d\t",a[i]);
    }

}
