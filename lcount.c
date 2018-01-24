#include<stdio.h>
int main()
{
	char str[100]="hello word.goodbye";
   int i = 0, len = 0, f = 1;
   printf("%d\n", len);
   for(i = 0; i <= len-1; i++)
   {
      if(str[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("%d", f);
   return 0;
   }
