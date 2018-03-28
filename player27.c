#include <stdio.h>
#include<string.h>
int main(void) {
	char str[25],i;
	printf("enter the string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>96)
		{
			str[i]=str[i]-32;
		}
		else if(str[i]<91)
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
	// your code goes here
	return 0;
}
