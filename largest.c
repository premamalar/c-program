#include<stdio.h>
void main()
{
double n1,n2,n3;
printf("enter the largest number:");
scanf("%lf%lf%lf",&n1,&n2,&n3);
if(n1>=n2 && n2>=n3)
{
printf("n1 is a largest number:",n1);
}
elseif(n2>=n3 && n2>=n1)
{
printf("n2 is a largest number:",n2);
}
else
{
printf("n3 is a largest number:",n3);
}
}
