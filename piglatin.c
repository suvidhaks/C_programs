#include<stdio.h>
#define MAX 80
void initialize(char [], char []);
int read(char []);
void piglatin(char [], char [], int, int);
void display(char [], char [], int);
int words(char [], int);
int main()
{
    int lcount, wcount;
    char a[MAX], b[MAX];
    initialize(a,b);
    lcount=read(a);
    wcount=words(a,lcount);
  //  printf("%d \n", wcount);
    piglatin(a,b,lcount,wcount);
   // display(a,b,lcount);
}

void initialize(char eng[MAX], char pigl[MAX])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        eng[i]=' ';
        pigl[i]=' ';
    }
}


int read(char eng[MAX])
{
    char c;
    int count=0;
    while((c=getchar())!='\n')
    {
        eng[count]=c;
        count++;
    }
    return count;
}


int words(char eng[MAX], int count)
{
    int i, word=1;
    for(i=0;i<count;i++)
    {
        if(eng[i]==' ' && eng[i+1]!=' ')
        {
            word++;
        }
    }
    return word;
}


void piglatin(char eng[MAX], char pigl[MAX], int lcount, int word)
{
    int count,m1=0,m2,n;
     int i=0;
   
    for(n=1;n<=word;n++)
    {
             count=m1;
            while(eng[count]!=' ')
          {
               m2=count++;
               //count++;
          }
         // m2=count;
        // printf(" %d", m2);
          for(count=m1;count<m2;count++)
          {
                      pigl[count+(n-1)]=eng[count+1];
                       pigl[m2+(n-1)]=eng[m1];  
                   
          }
        
         pigl[m2+n]='a';
        // pigl[m2+2]=' ';
          m1=m2+2;
           
    }
    //printf("%d",m2);
    for(i=0;i<MAX;i++)
       printf("%c", pigl[i]);
}






void display(char eng[MAX], char pigl[MAX], int count)
{
    int i;
    for(i=0;i<count;i++)
       printf("%c", pigl[i]);
}





