#include<stdio.h>
void main()
{
int orgno;
printf("enter the original number:",orgno);
int rem,res,result;
{
rem=orgno%10;
result=res+rem*rem*rem;
orgno/=10;
}
printf("result of armstrong",result);
}
