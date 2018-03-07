#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,z;
clrscr();
printf("enter the value");
scanf("%d%d%d",&a,&b,&c);
printf("values is");
z=a*b%c;
printf("%d",z);
getch();
}
