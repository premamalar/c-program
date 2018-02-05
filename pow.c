#include <stdio.h>
int main()
{
int n,power;
printf("enter the value:");
scanf("%d",&n);
power=n*n;
printf("power of given number%d",power);
if(power/2)
{
	printf("YES");
}
else
{
	printf("NO");
}
// your code goes here
return 0;
}
