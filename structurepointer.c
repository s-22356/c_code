#include<conio.h>
#include<string.h>
#include<stdio.h>
void input(struct book *);
void display(struct book);
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct book b1;
    input(b1);
    getch();
}
void input(struct book *p)
{
    printf("Enter bookid title and price :");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
}
void display(struct book a)
{
     printf("%d %s %f",a.bookid,a.title,a.price);
}
