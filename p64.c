#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter two values");
scanf("%d%d",&a,&b);
c=a+b;
printf("add %d",c);
if(c%=2)
{
printf("ODD");
}
else
{
printf("EVEN");
}
getch();
}
