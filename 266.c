#include<stdio.h>
void main()
{
int a[100],i,j,n;
scanf("%d",&n);
printf("enter the number");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d",a[j]);
printf("to find median element");
n=(n+1)/2-1;
printf("%d".a[n]);
}
}
}
