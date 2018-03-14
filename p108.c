#include <stdio.h>
int main(void) {
	int a,b,c,sum=0,i;
	printf("enter a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	for(i=a;i<c;i=i+b)
	{
		sum=+i;
	}
	printf("sum%d",sum);
	// your code goes here
	return 0;
}
