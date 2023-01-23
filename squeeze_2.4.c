#include <stdio.h>
#define max 100
char a[max], b[max];
void read(char [], char []);
void squeeze(char [], char []);
int main()
{
   int i,j;
   printf("enter string a and b \n");
   read(a,b);
   squeeze(a,b);
  
    return 0;
}

void read(char a[max], char b[max])
{
    int i=0, j=0;
    char c;
    
    while(i<max && (c=getchar())!='\n')
    {
        a[i]=c;
        i++;
    }
    a[i]='\0';
     while(j<max && (c=getchar())!='\n')
    {
        b[j]=c;
        j++;
    }
    b[j]='\0';
   
 
 return;  
 
}



void squeeze(char a[max], char b[max])
{
    int i1=0,j1=0;
    int i=0,j=0, k=0;
    int m=0,n=0;
    char c;
    while(a[i1]!='\0')
    {
        i1++;
    }
     while(b[j1]!='\0')
    {
        j1++;
    }
   
   if(i1>=j1)
   {
       for(i=0;b[i]!='\0';i++)
       {
           c=b[i];
           for(j=0;a[j]!='\0';j++)
           {
              if(c==a[j])
              {
                  a[j]='-';
                  
              }
           }
           
       }
      
    for(m=0;a[m]!='\0';m++)
    {  
       c=a[m];
       if(c!='-')
       {
          a[n]=c;
           n++;
                  
        }
     }
   a[n]='\0';
    printf("\n%s", a);
       
   }
   
   else
   {
       printf("stringlength of array [b] must be lesser or equal to array [a]");
   }
   
    
   
   return ;
}
