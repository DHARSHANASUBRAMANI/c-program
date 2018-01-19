#include <stdio.h>

void main()
{
int low,high,i,flag=0;
printf("enter the intervals");
scanf("%d%d",&low,&high);
while(low<high)
{
	for(i=2;i<=low;i++)
	{
		if(low%i==0)
		{
			flag=1;
			break;
			
		}
		if(flag==0)
		printf("%d",low);
		++low;
	}
}
	
}
