#include <stdio.h>
int main()
{
	int h,m,hr,min,hr1,min1;
	printf("enter time");
	scanf("%d%d",&hr,&min);
	printf("enter 2 time");
	scanf("%d%d",&hr1,&min1);
	h=hr-hr1;
	m=min-min1;
	printf("%d%d",h,m);
	
}
