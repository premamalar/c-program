#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10];
int n,m,i;
clrscr();
printf("enter the number:");
scanf("%d",&a);
printf("enter the number");
scanf("%d",&n);
m=strlen(a);
for(i=n;i<m;i++)
{
printf("%s",a[i]);
}
getch();
return 0;
}
