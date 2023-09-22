#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort_string(char city[][20],int n);
main()
{
    int i;
    char cities[6][20]={"raja","durgapur","kolkata","aelhi","pune","lucknow"};
    sort_string(cities,6);
    for(i=0;i<=5;i++)
    {
        printf("%s\n",cities[i]);
    }
}
void sort_string(char city[][20],int n)
{
    int i,round;
    char temp[20];
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<n-round;i++)
        {
            if(1==strcmp(city[i],city[i+1]))
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);

            }
        }
    }
}
