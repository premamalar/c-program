#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=0;
clrscr();
printf("number:");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
