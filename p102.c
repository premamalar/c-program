#include<stdio.h>
#include<conio.h>
void main()
{
int x,i,flag;
clrscr();
printf("enter x values:");
scanf("%d",&x);
for(i=0;i<=x;i++)
{
if((x/i==2) && (x/i==0))
{
printf("value is%d",i);
flag=1;
break;
}

if(flag==0)
{
printf("%d",x);
}
}
}
