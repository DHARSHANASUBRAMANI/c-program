#include <stdio.h>

int main() 
{
	int base;
	int exponent;
	int result=1;
	scanf("%d%d%d",&base,&exponent);
	while(exponent!=0)
{
	result=result*base;
	--exponent;
}
printf("%d",result);
}
