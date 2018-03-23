#include <stdio.h>
#include<string.h>
int main(void) 
{
char a[100];
char k;
int i,count=0,max=0,j;
printf("enter the string");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}
if(count>max)
{
k=a[i];
max=count;
}
}
printf("%s",k);
return 0;
}
