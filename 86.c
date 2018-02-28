#include "stdio.h"
#include<string.h>
int main(void)
{
 char a[10];
 int i,j,l,count=0;
 printf("enter the string");
 scanf("%s",a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
   for(j+1;j<=l;j++)
   {
     if(a[i]==a[j])
     {
       count++;
     }
   }
 }
 if(count==0)
 {
   printf("  isogram");
 }
 else
 {
   printf("not isogram");
 }
return 0;
}
