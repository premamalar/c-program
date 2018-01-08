#include<stdio.h>
void main()
{
int hrs,time=350,mins;
printf("enter the time:",time);
hrs=time/60;
mins=time%60;
printf("%d%02d",hrs,mins);
}
