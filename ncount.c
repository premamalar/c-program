#include<stdio.h>
int main()
{
char s[100]="helloworld.123";
int alphabets=0,i=0;
while(s[i]!='\0')
{
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
alphabets++;
}
}
printf("%c",s[i]);
return 0;
}
