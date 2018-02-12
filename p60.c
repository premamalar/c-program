#include<stdio.h>
int main()
{
int i,n,x=0,y=1,num;
printf("enter the number:");
scanf("%d",&n);
printf("fibo series:");
for(i=0;i<=n;i++)
{
	printf("%d",x);
	num=x+y;
	x=y;
	y=num;
}
	return 0;
}
