
#include <stdio.h>
#define EOL '\t'
#define wor 1
int main()
{
    char c[80];
    int i=0,c1=1, ct=0,word=wor;
    while((c[ct]=getchar())!=EOF)
    {
        if(c[ct]=='\n')
          c1++;
          else if((c[ct]==' '|| c[ct]=='\t' || c[ct]=='\n') && (c[ct+1]!=' '|| c[ct+1]!='\t' || c[ct+1]!='\n'))
          {
              word++;
          }
        ct++;  
    }
    while(i<ct)
    {
       putchar(c[i]);
       i++;
    }
    
    printf("\ncharacter count=%d", ct);
     printf("\nline count=%d", c1);
      printf("\nword count=%d", word);
    return 0;
}
