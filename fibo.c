#include<stdio.h>
int main()
{
int fact,i;
printf("enter the number:");
scanf("%d",&fact);
for(i=1;i<=fact;i++)
{
fact=(fact*1)-1;
printf("fibo series:%d",fact);
}
return 0;
}
