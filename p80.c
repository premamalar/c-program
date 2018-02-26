#include <stdio.h>
#include<string.h>
int main()
{
char a[10];
int x,i;
printf("enter the elements");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
x=(int)(a[i]);
if(x%2!=0)
{
printf("\n%c",a[i]);
}
}
return 0;
}
