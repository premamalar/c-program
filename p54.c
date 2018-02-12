#include <stdio.h>

int main(void) {
	int num;
	printf("values are");
	scanf("%d",&num);
    if(num%2==0)
    {
    	printf("num is%d",num);
    }
    else
    {
    	printf("nearest value is%d",num-1);
    }
	return 0;
}
