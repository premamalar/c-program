#include <stdio.h>

int main(void) {
	int l,r,i,j,count=0;
	printf("enter l and r:");
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++)
	{
		for(j=2;j<=r;j++)
	{
		if((j*j)==i)
		{
			count=count+1;
		}
	}
	}
	printf("%d",count);
	// your code goes here
	return 0;
}
