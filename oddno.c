#include<stdio.h>
void main()
{
int m=40,n=20,i;
printf("enter the odd number b/w two intervals m&n:");
scanf("%d",&i);
for(i=m;i<=n;i++)
{
if(i%2==1)
{
printf("i:",i);
}
}
}
