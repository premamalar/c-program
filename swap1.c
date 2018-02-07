#include<stdio.h>
int main()
{
int a,b;
a=37;
b=73;
int temp;
temp=a;
a=b;
b=temp;
printf("%d",a);
printf("%d",b);
return 0;
}
