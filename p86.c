#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char c[25];
clrscr();
printf("enter the string");
scanf("%s",&c);
for(i=0;c[i]!='\0';i++)
{
for(j=i+1;c[j]!='\0';j++)
{
if(c[i]==c[j])
{
printf("it is not isogram");
}
printf("it is a isogram");
}
}
getch();
}
