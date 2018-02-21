#include<stdio.h>
void main()
{
int a;
printf("enter value");
scanf("%d",&a);
a=a+1;
while(a%10!=0)
{
a=a+1;
}
printf("%d",a);
}
