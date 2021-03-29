//w.a.p to find biggest of three numbers using structures
#include<stdio.h>
#include<conio.h>
struct big
{
int a;
int b;
int c;
int r;
}d;
void main()
{
clrscr();
printf("enter three nummbers");
scanf("%d%d%d",&d.a,&d.b,&d.c);
if(d.a>d.b&&d.a>d.c)
d.r=d.a;
else if(d.b>d.a&&d.b>d.c)
d.r=d.b;
else
d.r=d.c;
printf("%d",d.r);
getch();
}
