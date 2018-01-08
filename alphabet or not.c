#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
if(c=(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("character is alphabet");
else
printf("character is not alphabet");
}
