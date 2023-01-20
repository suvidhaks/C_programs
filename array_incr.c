
#include <stdio.h>

int main()
{
    int a[10], i=0, nwhite=0,nline=0;
    char c;
    
    for(i=0;i<10;i++)
    {
       a[i]=0;
        
    }
    
    while((c=getchar())!=EOF)
    {
        if(c>='0'&& c<='9')
           ++a[c-'0'];
           else if(c==' ' || c=='\t')
             nwhite++;
             else
               nline++;
    }
    
    for(i=0;i<10;i++)
    {
     printf("i= %d\t",a[i]);
        
    }
      
        printf("\nnspace= %d",nwhite); 
              
        printf("\nnline= %d",nline); 

    return 0;
}


/*
input 
1 1 2 1 1 1 1 1 3 4
all these indexes will be incremented by one everytime the characters are entered
*/