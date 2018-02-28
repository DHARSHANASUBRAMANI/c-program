#include "stdio.h"

int main(void)
{
  int n,a[10],i;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(a[i]!=i)
    printf("%d",i);
    else
    printf("%d",a[i]);
  }
  
  return 0;
}
