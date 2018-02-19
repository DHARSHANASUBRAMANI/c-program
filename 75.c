#include "stdio.h"
#include<string.h>

int main(void)
{
  char a[10]="hello";
  int l;
  char b;
  l=strlen(a);
  b='*';
  a[l/2]=b;
  if(l%2==0)
  {
    a[(l-1)/2]=b;
  }
  printf("%s",a);
  return 0;
}
