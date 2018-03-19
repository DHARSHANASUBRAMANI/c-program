#include <stdio.h>
int main()
{
  int a,n,d,ap;
  printf("enter the value for a,d,n");
  scanf("%d%d%d",&a,&d,&n);
  ap=(n/2)*(a+(n-1))*d;
  printf("%d",ap);
  return 0;
}
