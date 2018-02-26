#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value");
scanf("%d%d",&a,&b);
if(a==b)
{
  c=pow(a,b);
printf("YES");
}
else
{
printf("NO");
}
}
