#include<stdio.h>
void main()
{
int i,j,flag,n,p,c=0;
printf("enter the number:");
scanf("%d%d",&n,&p);
for(i=n;i<=p;++i)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if((i%j) == 0)
{
flag++;
break;
}
}
if(flag==0)
c++;
}
printf("%d",c);
}
