#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10];
int i,n;
clrscr();
printf("enter the string");
for(i=0;i<10;i++)
{
scanf("%c",&a[i]);
}
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
getch();
}
