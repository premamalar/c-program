#include<stdio.h>
#include<string.h>
void main()
{
	char a[25];
	int i,j,temp;
	printf("enter the string:");
	scanf("%s",&a);
	for(i=0,j=1;a[i]!='\0';i=i+2,j=j+2)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s",a);
}
