#include "stdio.h"
#include<string.h>
int main(void) 
{
  char a[10];
  int i,n;
  printf("enter the string");
  scanf("%s",a);
  printf("enter the number");
  scanf("%d",&n);
   strrev(a);
   for(i=0;i<=n;i++)
   {
  printf("%c",a[i]);
  
   }
  return 0;
}
