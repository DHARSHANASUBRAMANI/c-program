#include <stdio.h>
void main()
{
	int a,sum=0,n;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("%d",sum);
}
	
