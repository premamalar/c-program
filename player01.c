#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    gets(str);
    int i, length;
    length=strlen(str);
    for(i=length;i>=0;i--)
    printf("%c",str[i]);
    return(0);
}
