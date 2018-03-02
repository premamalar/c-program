#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("enter a and b");
scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{
if(a%i==0&&b%i==0)
{
printf("GCD %d",i);
}
getch();
}
}
