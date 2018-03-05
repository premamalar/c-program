#include<stdio.h>
#include<conio.h>
void main()
{
int p,t,n,si;
clrscr();
printf("enter amount,time,rate");
scanf("%d%d%d",&p,&t,&n);
si=(p*t*n)/100;
printf("%d",si);
getch();
}
