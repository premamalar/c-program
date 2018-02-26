#include<stdio.h>
int main()
{
int a,n,i,x,y,y1,y2;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<1;i++)
{
printf("factors are:");
x=1;
y=x+1;
y1=y+x;
y2=y1+y+x;
printf("%d%d%d%d",x,y,y1,y2);
}
return 0;
}
