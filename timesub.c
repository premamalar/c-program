#include<stdio.h>
int main()
{
int time,mins,sub;
printf("enter the time and mins:",time,mins);
time=time/24;
mins=time%60;
sub=time-mins/24-60;
printf("same format of time and minutes:,sub);
return 0;
}
