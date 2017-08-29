#include<stdio.h>
#include<math.h>
void main()
{
double base,exponent,result;
printf("enter the base number:");
scanf("%lf",&base);
printf("enter the exponent number:");
scanf("%lf",&exponent);
result=pow(base,exponent)
printf("%1lf^%1lf=%2lf",base,exponent,result);
}
