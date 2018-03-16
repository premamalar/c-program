#include<stdio.h>
#include<conio.h>
int main()
{
int n,k,i,a,prod=1;
clrscr();
printf("enter n:");
for(i=0;i<=2;i++)
{
scanf("%d",&n);
}
printf("enter k:");
for(i=0;i<=3;i++)
{
scanf("%d",&k);
while(k==0)
{
a=k%10;
prod=prod*a;
k=k/10;
}
}
printf("product%d",k);
getch();
}
