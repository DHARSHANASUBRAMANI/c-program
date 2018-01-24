#include<stdio.h>
#include<conio.h>
 void main()
      {
      	char str[50];
         int i,count=0;
         clrscr();
         printf("Enter any string ");
         gets(str);
         for(i=0;str[i];i++)
         if(str[i] == ' ')
         count++;
        printf("Total spaces is %d",count);
         getch();
    }

