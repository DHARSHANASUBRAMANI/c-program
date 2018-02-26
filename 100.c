#include "stdio.h"

int main(void)
{
  int a,ans=1,rem;
  printf("enter the number");
  scanf("%d",&a);
  while(a!=0)
  {
    rem=a%10;
    ans=ans*rem;
    a=a/10;
  }
  printf("%d",ans);
  return 0;
}
