#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(a>=c))
printf("a is greater");
if((b>=a)&&(a>=c))
printf("b is greater");
if((c>=a)&&(c>=b))
printf("c is greater");
}
