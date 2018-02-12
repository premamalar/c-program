#include <stdio.h>

int main(void) {
	int a[10],i,max;
	printf("enter a values:");
	for(i=0;i<10;i++)
{
		scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
	max=a[i];
}
	printf("maximium value is%d",max);
	//code goes here
	return 0;
}
