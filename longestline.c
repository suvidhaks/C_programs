#include <stdio.h>
#define MAX 1000

int linecount(char [],int);
void copy(char[], char[]);

int main()
{
  char original[MAX];
  char longest[MAX];
  int max=0, len;
  while((len=linecount(original,MAX))>0)
  {
      if(len>max)
      {
          max=len;
          copy(longest,original);
      }
  }
printf("%s", longest);
    return 0;
}

int linecount(char a[],int maxline)
{
    int i;
    char c;
    for(i=0; i<maxline && (c=getchar())!=EOF && c!='\n'; i++)
    {
         a[i]=c;
    }
    if(c=='\n')
    {
        a[i]=c;
        i++;
    }
    a[i]='\0';
    return i;
}


void copy(char to[MAX], char from[MAX])
{
    int i=0;
    while((to[i]=from[i])!='\0')
    {
        i++;
    }
    return;
}



