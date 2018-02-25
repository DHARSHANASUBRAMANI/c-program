#include "stdio.h"

int main(void) 
{
 int a,b,c;
 printf("enter the numbers");
 scanf("%d%d",&a,&b);
 c=a*b;
 printf("product is %d\n",c);
 if(c==(a*a)&&c==(b*b))
 printf("yes");
 else
 printf("no");
  return 0;
}
