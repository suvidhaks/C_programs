#include <stdio.h>
#define LIMIT 1000
int line(char [], int);
void reverse(char []);
int strindex(char [], char[]);
int main()
{
    char s[LIMIT];
    char pattern[]="lord";
    int lin;
    int plen;

    lin=line(s,LIMIT);
   plen=  strindex(s, pattern);
   printf("\n%d", plen);
 
     
    return 0;
}

int line(char s[], int lim)
{
    int i=0;
    char c;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
    {
        s[i++]=c;
    }
    if(c=='\n')
    {
        s[i++]=c;
    }
    s[i]='\0';
    return i;
}


void reverse(char p[])
{
    int i=0,j=0;
    int count=0;
    char s;
    while(p[i++]!='\0')
    {
        ;
    }
    --i;
   // printf("%d", i);
    for(count=i-1,j=0;j<count;count--,j++)
    {      
         s=p[j];
        p[j]=p[count];
        p[count]=s;
    }
   // printf("%s", p);
}


int strindex(char s[], char p[])
{
    int i, j,k, count;
    
   
      
   // printf("%d", (int)strlen(p));
   // printf("%s", s);
    for(count=0;s[count]!='\0';count++)
    {
        for(j=count,k=0; p[k] !='\0' && s[j]==p[k];j++,k++);
        
        if(k>0 && p[k]=='\0')
        {
           // printf("k=%d", k);
            return (count+(k-1));   // this function returns the rightmost character of p[] in s[] loc;
        }
    }
   //printf("\n%d", count);
    return -1;
}




