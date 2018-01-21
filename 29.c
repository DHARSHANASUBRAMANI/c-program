#include<stdio.h>
void main()
{
int a,b;
printf("enter the minutes");
scanf("%d",&a);
while(a>=60)
{
b=a/60;
printf("hours is %d%d",a,b);
}
}
