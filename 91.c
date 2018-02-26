#include "stdio.h"

int main(void)
{
  int l,b,h;
  int tsa,volume;
  printf("enter the length,bredth,height");
  scanf("%d \n %d \n %d",&l,&b,&h);
  tsa=(2*l*b)+(2*l*h)+(2*b*h);
  volume=(l*b*h);
  printf("volume %d \n",volume);
  printf("total surface area %d",tsa);
  return 0;
}
