#include <stdio.h>
int main(void) 
{
int i,n,k,array[50],count=1;
printf("enter n,k:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]==k)
{
count=count+1;
}
}
printf("%d",count);
return 0;
}
