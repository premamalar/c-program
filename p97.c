#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,rev=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
rev=rev*10+a;
n=n/10;
}
printf("reverse number%d",rev);
getch();
return 0;
}
