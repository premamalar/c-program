#include<stdio.h>
#include<conio.h>
void main()
{
int a[12],sum=0,n,i;
clrscr();
printf("enter the string");
scanf("%d",n);
for(i=0;i<n;i++)
{
 scanf("%d",a[i]);
 }
 for(i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
 printf("sum is %d",sum);
 getch();
 }
