#include "stdio.h"

int main(void)
{
  int n,k,a[10],i;
  int count=0;
  printf("enter the n,k value");
  scanf("%d%d",&n,&k);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  
  {
    if(a[i]==k)
  {
  
  count++;
  }
  }
  printf("%d",count);
  return 0;
}
