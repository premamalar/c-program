#include <stdio.h>
int main()
{
int a[5];
int i=0;
printf("enter the number");
scanf("%d",&a[i]);
if(a[i]>=0)
{
	printf("lowest number in array%d",a[i]);
}

else if(a[i]<=0)
{
	printf("highest number in array%d",a[i]);
}
else
{
	printf("value%d",a[i]);
}
// your code goes here
return 0;
}
