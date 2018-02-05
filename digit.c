#include <stdio.h>
int main()
{
	int count,n;
	printf("n value");
	scanf("%d",&n);
	while(n!=0)
{
	n=n/10;
	count=++count;
}
	
	printf("numeric digit%d",count);	
// your code goes here
return 0;
}
