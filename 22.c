# include<stdio.h>
void main()
{
int array[100],max,size,c,location=1;
printf("size of array");
scanf("%d",size);
printf("enter the element");
for(i=0;i<size;i++)
{
scanf("%d",array[i]);
}
max=array[0];
for(i=0;i<size;i++)
{
if(array[i]>max)
{
max=array[i];
location=i+1;
}
}
printf("max is %d",max);
}
