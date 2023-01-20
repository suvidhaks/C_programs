
#include <stdio.h>
#define MAX 1000

void reverse(char [], int);
int read(char [], int);
void copy(char[], char[], int);

int main()
{
  char original[MAX];
  char longest[MAX];
  int max=0, len;
 while((len=read(original,MAX))>0)
  { 
    
       copy(longest, original, len);
  } 
   
    return 0;
}


void copy(char to[MAX], char from[MAX], int count)
{
    int i=0,j;
    for(j=count-2,i=0;j>=0;j--,i++)
    {
        to[i]=from[j];
    }
    to[i]='\n';
    to[++i]='\0';
    printf("\n%d", i);
    printf("\n%s", to);
    return;
}


int read(char a[], int maxline)
{
    int i,count=0, len;
    char c;
    while(count<maxline && (c=getchar())!=EOF && c!='\n')
    {
        a[count]=c;
        count++;
    }
    if(c=='\n')
    {
        a[count]=c;
        count++;
    }
    a[count]='\0';
    return count;
}



/*void reverse(char a[], int count)
{
    int i;
    for(i=count-2; i>=0;i--)
      printf("%c ", a[i]);
      return ;
}*/



