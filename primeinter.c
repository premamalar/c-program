#include<stdio.h>
void main()
{
int low,high,i,flag;
printf("enter the two intervals:");
scanf("%d%d",&low,&high);
while(low<high)
{
flag=0;
for(i=2;i<=low/2;++i)
{
if(low%i==0)
{
flag=1;
break;
}}
}
}
