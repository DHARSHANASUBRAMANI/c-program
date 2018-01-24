#include<stdio.h>
void main()
{
  int countch=0;
  int countwd=1;
  printf("Enter your sentence");
  char ch='a';
  while(ch!='/r')
  {
    ch=getch();
    if(ch==' ')
      countwd++;
    else
      countch++;
  }
  printf(" Words  is %d ",countwd);
  printf("Characters  is %d ",countch-1);
  getch();
}

