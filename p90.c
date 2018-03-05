#include <stdio.h>
#include<conio.h>
int main() 
{
	char a[10];
	int i;
  clrscr();
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			printf("%c",a[i]);
		}
	}
  getch();
	return 0;
}
