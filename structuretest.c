#include<stdio.h>
struct book
{
    int bookid;
    char booktitle[20];
    float bookprice;
};
struct book input();
main()
{
    struct book b1;
    b1=input();
    printf("%d%s%f",b1.bookid,b1.booktitle,b1.bookprice);

}
struct book input()
{
    struct book b2;
    printf("enter id name and price of the book :");
    scanf("%d",&b2.bookid);
    fflush(stdin);
    gets(b2.booktitle);
    scanf("%f",&b2.bookprice);
    return b2;
}
