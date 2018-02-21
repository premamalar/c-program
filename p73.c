#include<stdio.h>
void main()
{
int l,r,n;
  printf("enter the value");
  scanf("%d%d",&l,&r);
  printf("enter number");
  scanf("%d",&n);
  if(n>l && n<r)
  {
    printf("YES%d",n)
  }
  else
  {
    printf("NO%d",n);
  }
}
