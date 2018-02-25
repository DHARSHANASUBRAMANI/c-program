#include "stdio.h"

int main(void) 
{
 int a,t;
 printf("enter the numbers");
 scanf("%d",&a);
 while(a!=0)
 {
   t=a%10;
   if((a%2)!=0)
   {
     printf("%d",t);
   }
   a=a/10;
 }
 
}
