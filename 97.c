#include "stdio.h"

int main(void)
{
  int a=26,n=0,r;
  while(a!=0)
  {
    r=a%10;
    n=(n*10)+r;
    a=a/10;
  }
  printf("%d",n);
  return 0;
}
