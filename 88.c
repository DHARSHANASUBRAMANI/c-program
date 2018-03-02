#include<stdio.h>
void main()
{
  int a,b,i,lcm=0;
  printf("numbers");
  scanf("%d%d",&a,&b);
  for(i=2;i<1000;i++)
  {
    if(i%a==0&&i%b==0)
    {
    lcm=i;
    break;
  }
  }
  
  printf("%d",lcm);
  
}
