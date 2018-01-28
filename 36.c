#include <stdio.h>
int main()
{
    char    str[100];
    int countsplchar;
    int counter;
    countsplchar=0;
    printf("Enter a string");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
    if(str[counter]>='0' && str[counter]<='9')
            countsplchar++;
    }
    printf("%d",countsplchar);
 
    return 0;
}
