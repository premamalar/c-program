#include <stdio.h>
int main(void) {
	int a,temp,temp1,temp2;
printf("enter a value");
scanf("%d",&a);
temp=a/100;
temp1=a%100;
printf("%d ",temp);
temp=temp1/10;
temp2=temp1%10;
printf("%d ",temp);
printf("%d ",temp2);
	// your code goes here
	return 0;
}
