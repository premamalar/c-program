#include <stdio.h>
#include<conio.h>
int main()
{
int rem,lcm,gcd,a,b;
clrscr();
printf("enter a and b:");
scanf("%d%d",&a,&b);
do
{
rem=a%b;
if(rem==0)
a=b;
b=rem;
}while(rem!=0);
gcd=b;
lcm=(a*b)/gcd;
printf("\n the lcm is: %d",lcm);
getch();
return 0;
}
