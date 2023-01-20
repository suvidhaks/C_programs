#include<stdio.h>
#include "string.h"

void read(char []);
int main()
{
    char a[limit];
    int len, decimal_value;
    read(a);
    len=stringlen(a);
    decimal_value=Atoi(a);
    printf("strlen=%d\n, decimalvalue=%d",len, decimal_value);
    lower_char(a);
    printf("\n%s", a);
    upper_char(a);
    printf("\n%s", a);
    return 0;

}

void read(char a[limit])
{
    int i=0;
    char c;
   while(i<limit && (c=getchar())!=EOF)
    {
        a[i]=c;
        i++;
    }
    a[i]='\0';
  return ;
}