#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,prod=1;
clrscr();
printf("enter the values");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
prod=prod*a;
n=n/10;
}
printf("%d",prod);
getch();
}
