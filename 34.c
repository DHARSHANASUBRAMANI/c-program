#include <stdio.h>
void main()
{
char str[200];
int i=0;count =0;
printf("enter the string");
while(str[i]!='\0')
{
if(str[i]=='.')
count++;
i++;
}
printf("number of words in string %d",count+1);
}
