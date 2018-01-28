#include <stdio.h>
void main()
{
	int a,b,temp;
	printf("%d%d",a,b);
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d%d",a,b);
}

