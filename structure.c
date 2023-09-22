#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[50];
    float price;
};
main()
{
    struct book b1={5,"web development using php",458.5};
    struct book b2;

    b2.bookid=5;
    fflush(stdin);
    strcpy(b2.title,"java");
    b2.price=450.5;


    printf("%d %s %f",b2.bookid,b1.title,b2.price);
}
