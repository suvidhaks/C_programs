#include<stdio.h>
#define MAX 100

 char a[MAX];
int read( char []);
void display( char []);
long int octal(char a[MAX], int count);
long int power(int, int);
int main()
{
    int  flag=0,len,i;
    long int oct;
    
   len= read(a);
   printf("%d\n",len);

    /*for(i=0;i<len;i++)
    {
       if(a[i]<=7)
       {
          flag++; 
       }
       
    }
    if (flag==len)
    {
        oct=octal(a,len);
          printf("\noctal value=%ld",oct);
    }
    else
    {
          printf("enter valid octal number between range[0-7]");
    }*/

   oct=octal(a,len);
   
   
   return 0;
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
      
      
    }
   // count=i;
   // printf("count=%d", count);
    a[i]='\0';
    
    return i;
}

void display(char a[MAX])
{
    
    int i=0;
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c", a[i]);
    }
    return ;
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

long int octal(char a[MAX], int count)
{
     int i=0,i1, flag=0, j=count-1;
     long int oct=0;
     for(i=0;i<count;i++)
    {
       if(a[i]<=7)
       {
          flag++; 
       }
       
    }
    if (flag!=count)
    {
        
           printf("enter valid octal number between range[0-7]");
           return 0;
    }
    else
    {
     for(i1 = 0; i1 < count; i1++)
     {
        
            oct=oct +a[i1]*power(8,j);
             j--;
          
     }
      printf("\noctal value=%ld",oct); 
     return oct;
    }
      
     
}