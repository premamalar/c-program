#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("enter the positive number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("it is prime number");
}
else
{
printf("it is composite number");
}
}
