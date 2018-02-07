#include <stdio.h>
void main()
{
	int a[20]={1,2,3,4,5,6,7,8,9,10};
	int n=10,max,i;
	max=a[0];
	for(i=0;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
printf("%d",max);
}
