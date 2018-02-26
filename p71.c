#include<stdio.h>
#include<string.h>
int main()
{
char c;
int r,t;
printf("enter the elements:");
scanf("%s",&c);
t=c;
while(t!='\0')
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(c!=r)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
