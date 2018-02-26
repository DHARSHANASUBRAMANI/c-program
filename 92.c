#include "stdio.h"

int main(void)
{
  int n,i,sum=0,a[10];
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the values");
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
    printf("%d",sum);
  
  return 0;
}
