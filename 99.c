#include "stdio.h"

int main(void)
{
  int a,b,c,product,ans;
  printf("enter the numbers");
  scanf("%d%d%d",&a,&b,&c);
  product=a*b;
  ans=product%c;
  printf("%d",ans);
  return 0;
}
