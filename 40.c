#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,next term;
	printf("enter the element");
	scanf("%d",&n);
	printf("fibonacci series");
	for(i=o;i<=n;++i)
	{
		printf("%d",a);
		next term=a+b;
		a=b;
		b=next term;
	}
	return 0;
}
