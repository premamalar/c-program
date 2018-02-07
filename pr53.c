#include <stdio.h>
int main(void) {
	int a,temp,temp1,temp2,temp3;
printf("enter a value");
scanf("%d",&a);
temp3=a/100;
temp1=a%100;
printf("%d ",temp3);
temp=temp1/10;
temp2=temp1%10;
printf("%d ",temp);
printf("%d ",temp2);
printf("sum:%d",(temp+temp2+temp3));
	// your code goes here
	return 0;
}
