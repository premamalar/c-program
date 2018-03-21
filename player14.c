#include <stdio.h>
#include<string.h>
int main(void) {
	char str[25];
	int i,x,y;
	printf("enter the string");
	scanf("%s",&str);
	y=strlen(str);
	while(y!=0)
            {
		for(i=0;i<=y;i++)
		{
			x=str[i];
		}
	}
	printf("%s",str);
	for(i=0;i<x;i++)
	{
		x=str[i];
		x%=10;
	}
	// your code goes here
	return 0;
}
