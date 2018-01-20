# include<stdio.h>
void main()
{
int array[100],min,size,c,location=1;
printf("size of array");
scanf("%d",&size);
printf("enter the element");
for(i=0;i<size;i++)
{
scanf("%d",array[i]);
}
min=array[0];
for(i=0;i<size;i++)
{
if(array[i]>min)
{
min=array[i];
location=i+1;
}
}
printf("min is %d",min);
}
