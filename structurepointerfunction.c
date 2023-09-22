#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
main()
{
    struct book b1;
    input(&b1);
    display(b1);
    getch();
}
void input(struct book *p)
{
        printf("Enter bookid title and price :");

        scanf("%d",&p->bookid);
        fflush(stdin);
        gets(p->title);
        scanf("%f",&p->price);
}
void display(struct book a)
{
        printf("%d %s %f",a.bookid,a.title,a.price);
}

