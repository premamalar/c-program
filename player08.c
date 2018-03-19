#include <stdio.h>
int main() 
{
char a[50],b[50];
int i,j,u,v,u1,v1;
printf("enter the string:");
scanf("%s\t\t%s",&a,&b);
u=a[0];
u1=b[0];
if(u>91)
{
v=u-32;
a[0]=v;
}
if(u1>91)
{
	v1=u1-32;
	b[0]=v1;
}
for(i=1;a[i]!='\0';i++)
{
if(a[i]==' ')
{
u=a[i+1];
if(u>91)
{
v=u-32;
a[i+1]=v;
}
}
}
for(j=1;b[j]!='\0';j++)
{
if(b[j]==' ')
{
u1=b[j+1];
if(u1>91)
{
v1=u1-32;
b[j+1]=v1;
}
}
}
printf("%s",a);
printf("%s",b);
return 0;
}
