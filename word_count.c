
#include <stdio.h>
#define EOL '\t'
#define wor 0
#define in 1
int main()
{
    char c;
    int i=0,c1=0, ct=0,word,nw=1;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
             ++ c1;
         if(c==' '|| c=='\t' || c=='\n' )
          {
              word=wor;
          }
         
    
   else if(word==wor)
   {
       word=in;
     nw++;
   }
     ct++;
    }
    printf("\ncharacter count=%d", ct);
     printf("\nline count=%d", c1);
      printf("\nword count=%d", nw-1);
    return 0;
}
