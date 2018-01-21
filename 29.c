#include<stdio.h>
void main()
{
int a,b;
printf("enter the minutes");
scanf("%d",&a);
while(a>=0)
{
b=a/60;
c=a%60;
printf("hours is %d%d",b,c);
}
}
