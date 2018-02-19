#include "stdio.h"
#include"string.h"
void main()
{
  int i,count=0;
 char x[10];
 scanf("%s",x);
 
 for(i=0;x[i]!='\0';i++)
 {
 if((x[i]=='a')||(x[i]=='e')||(x[i]=='i')||(x[i]=='o')||(x[i]=='u'))
 
   count=count+1;
 
   
 }
 if(count!=0)
 
  printf("vowel");
 
 
  else
  
    printf("not vowel");
  
 
}
