#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter the values");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("values of c:%d",c);
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
