#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,min=90;
clrscr();
printf("enter the numbers");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("minimum number is %d",min);
getch();
}
