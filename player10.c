#include <stdio.h>
#include<string.h>
int main(void) {
	char str1[25],str2[25];
	int count=0,x,y,i;
	printf("enter the string");
	scanf("%s%s",&str1,&str2);
	x=strlen(str1);
	y=strlen(str2);
	if(x!=y)
	{
		for(i=0;i<x;i++)
		{
			printf("%d",count);
		
		}
		}
	if(count!=1)
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
