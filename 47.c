#include<stdio.h>
int main()
{
int a[10],i,j,temp,n;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j]
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d%d",a[0],a[n-1]);
return 0;
}
