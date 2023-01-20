#include <stdio.h>
#define limit 100
int main()
{
    int i ;
    char c;
    for(i=0;i<limit-1,(c=getchar())!='\n',c!=EOF;i++)
    {
        putchar(c);
    }

    return 0;
}
