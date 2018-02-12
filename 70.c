#include "stdio.h"

int main(void)
{
 int a,b,n;
 scanf("%d",&a);
 b=(a&(a-1));
 if(b==0)
 {
  printf("power of 2\n");
  n=a*2;
  printf("nearest greater power of 2 is %d",n);
 }
 else
 {
   printf("not power of 2\n");
 }
 
  return 0;
}
