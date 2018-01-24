#include<stdio.h>
int main()
{
int a=150,b=160;
int temp;
temp=a;
a=b;
b=temp;
printf("%d%d",a,temp);
return 0;
}
