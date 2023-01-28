#include<stdio.h>
#define limit 100
int main()
{
   
    int i=0;
    char a[limit], c;
     while((c=getchar())!=EOF)
    {
         
        a[i]=c;
        i++;
    }
      
    a[i]='\0';  
   
    int i1;
    for(i1=0; a[i1]!='\0';i1++)
    {
        
       (a[i1]>='A' && a[i1]<='Z')?(a[i1]=a[i1]-'A'+'a'):(a[i1]>='a' && a[i1]<='z')?(a[i1]=a[i1]-'a'+'A'):' ';
        
    }
  
   
    for(i1=0; a[i1]!='\0';i1++)
    {
        putchar(a[i1]);
    
    }
   
   
   
  return 0 ;
}
