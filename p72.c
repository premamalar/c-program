#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i=0;
char c[10]={'a','e','i','o','u'};
clrscr();
printf("vowels in the strings are");
for(i=0;i<2;i++)
{
scanf("%s",&c[i]);
if(c[i]==0)
{
printf("vowels");
}
else
{
printf("not a vowels");
}
}
getch();
}
