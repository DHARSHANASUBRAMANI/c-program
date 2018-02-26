#include "stdio.h"

int main(void)
{
  int p,t,r;
  int simpleinterest;
  printf("enter principalamt,time ,rate ");
  scanf("%d%d%d",&p,&t,&r);
  simpleinterest=(p*t*r)/100;
  printf("%d",simpleinterest);
  return 0;
}
