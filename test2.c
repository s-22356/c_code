main()
{
  int n,i=2,x;
  printf("enter a number : ");//you can create variables here
  scanf("%d",&n);
  //start your code from here
  if(i==2)
  {
    printf("%d",i);
    i++;
  }
  while(n>=1)
  {
    for(x=2;x<n;x++)
    {
      if(i%x!=0)
      {
        continue;
      }
      else
      {
        i++;
        continue;
      }
    }
    if(i==x)
    {
      printf("%d",i);
      n--;
      i++;
    }

  }
}
