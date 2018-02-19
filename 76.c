#include "stdio.h"
#include<string.h>

int main(void)
{
  int n=11,flag,i;
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }  
    if(flag==0)
    {
    printf("  not composite");
  }
  else
  printf("composite");
  return 0;
}
