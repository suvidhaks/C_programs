#include<stdio.h>

#define MAX 100

 char a[MAX];
int read( char []);
long int hatoi(char a[MAX], int count);
long int power(int, int);
int main()
{
    int len;
    long int hex;
    
   len= read(a);
   printf("%d\n",len);
  
    hex=hatoi(a,len);
     printf("\nhex value=%d",hex);
}


int read( char a[MAX])
{
    int count=0, i=0;
   char c;
    while(i<MAX && (c=getchar())!=EOF)
    {
        if(c>='0' && c<='9')
        {
             a[i]=c-'0';
                i++;
        }
      else if( c>='A' && c<='F') 
      {
          a[i]=c;
          i++;
      }
      
      else if(c>='a' && c<='f')
      {
           a[i]=c-'a'+'A';
          i++;
      }
      
    }
   // count=i;
   // printf("count=%d", count);
    a[i]='\0';
    
    return i;
}



long int power(int base,int exponent)
{
    long int prod=1;
    int i;
  for(i=0;i<exponent;i++)
  {
    prod=base*prod;
  }
  return prod;
}

long int hatoi(char a[MAX], int count)
{
     int i=0, j;
     long int hex=0;
     
    for(i=0,j=count-1;i<count,j>=0;i++,j--)
    {
        if(a[i]=='A')
        {   a[i]=10;
             hex=hex +a[i]*power(16,j);
        }
       else  if(a[i]=='B')
        {   a[i]=11;
             hex=hex +a[i]*power(16,j);
        }
        else  if(a[i]=='C')
        {   a[i]=12;
             hex=hex +a[i]*power(16,j);
        }
        else  if(a[i]=='D')
        {   a[i]=13;
             hex=hex +a[i]*power(16,j);
        }
        else  if(a[i]=='E')
        {   a[i]=14;
             hex=hex +a[i]*power(16,j);
        }
        else  if(a[i]=='F')
        {   a[i]=15;
             hex=hex +a[i]*power(16,j);
        }
        else 
        {
           hex=hex +a[i]*power(16,j);
        }
    }
     return hex;
}
