#include<stdio.h>
#define limit 100
int stringlen(char []);
int Atoi(char []);
void lower_char(char []);
void upper_char(char []);




/*....................function       -------------   definitions...................................................*/

int stringlen(char a[])
{
    int i=0;
   while(i<limit && a[i]!='\0')
       i++;
return i;
}

int Atoi(char a[])
{
    char c;
    int i;
    static int n=0;
    
    for(i=0;a[i]!='\0';i++)
    {
          if(a[i]>='0' && a[i]<='9')
        {
                n=n*10+(a[i]-'0'); 
        }
           
           // printf("\n%d\t%d\t", n,a[i]);
           
    }
    return n;
}

void lower_char(char a[])
{
   
    int i;
    for(i=0; i<limit && a[i]!='\0';i++)
    {
            if(a[i]>='A' && a[i]<='Z')
            {
                 a[i]=a[i]-'A'+'a';
            }
    }
   
    
  return ;
}



void upper_char(char a[])
{
   
    int i;
    for(i=0; i<limit && a[i]!='\0';i++)
    {
            if(a[i]>='a' && a[i]<='z')
            {
                 a[i]=a[i]-'a'+'A';
            }
    }
   
    
  return ;
}