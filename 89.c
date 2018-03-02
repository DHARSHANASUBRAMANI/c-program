#include<stdio.h>
void main()
{
  char a[10];
  int len,i;
  printf("enter the string");
  scanf("%s",a);
  len=strlen(a);
  for(i=len-1;i>=0;i--)
  {
    printf("%c",a[i]);
  }
  
}
