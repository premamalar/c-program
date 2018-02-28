#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("ENTER UR CHOICE\n 1.modulus \n 2.division\n");
scanf("%d",&c);
if(c==1)
{
printf("MODULUS\n");
c=a%b;
printf("%d\n",c);
}
else if(c==2)
{
printf("DIVISION\n");
c=a/b;
printf("%d\n",c);
}
else
{
printf("Error!");
}
}
