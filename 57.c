#include <stdio.h>
void main()
{
	int a=12,b=23,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
}
