#include<stdio.h>
int main()
{
int year;
printf("enter the year:",year);
if(year%400==0)
printf("it is a leap",year);
elseif(year%100==0)
printf("it is not a leap",year);
elseif(year%4==0)
printf("it is a leap",year);
else
printf("it is not a leap",year);
return 0;
}

