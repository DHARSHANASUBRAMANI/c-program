#include <stdio.h>
void main()
{
	int a=12,b=23,temp;
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d%d",a,b);
}
