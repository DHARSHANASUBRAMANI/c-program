#include<stdio.h>
void main()
{
int c,d;
char a[20]="hello",b[30]="hai";
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else if(c<d)
{
printf("%s",b);

}
else
{
printf("%s%s",a,b);
}
}
