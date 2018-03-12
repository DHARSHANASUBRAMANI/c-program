#include<stdio.h>
void main()
{
int a[20],i,n,k;
printf("enter the number");
scanf("%d%d",&n,&k);
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("YES");
}
}
}
