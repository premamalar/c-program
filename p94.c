#include <stdio.h>
#include<conio.h>
void main()
{
int n,m,a[10],i;
clrscr();
printf("enter the 1st and 2nd position:");
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[m-1]);
getch();
return 0;
}
