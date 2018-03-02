#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,c;
clrscr();
printf("enter length,breadth,height:");
scanf("%d%d%d",&l,&b,&h);
c=l*b*h;
printf("volume of cuboid %d",c);
getch();
}
