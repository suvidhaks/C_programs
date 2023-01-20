
#include <stdio.h>
#define OUT 0
#define IN 1
int main()
{
   char c;
   int ct=0,word=0,linect=0,state=OUT;
   
   while((c=getchar())!=EOF)
   {
      
       if(c==' ' || c=='\t'|| c=='\n')
       {
           putchar('\n');
       }
       else
       {
      
         putchar(c);
        
       
       }
   }

    return 0;
}
