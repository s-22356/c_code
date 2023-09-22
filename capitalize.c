#include <stdio.h>
#include <string.h>
void capitalizeString(char C1[]);
void main()
{
    char A1[10];
    printf("enter a string :- ");
    gets(A1);
    capitalizeString(A1);

}
void capitalizeString(char C1[])
{
    int i;
    for(i=0;C1[i];i++)
    {
        if(C1[i]>=97 && C1[i]<=122)
        {
            C1[i]=C1[i]-32;
        }
    }

        printf("%s",C1);


}
