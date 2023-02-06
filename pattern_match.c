/*  --limit means that the \0 location is excluded
int line(char s[], int limit);
in this function everyline of the charracter array s[] is matched with the pattern string[]=" must";
  while(--limit>0 && (c=getchar())!=EOF && c!='\n')
  in this while loop i will take all the characters but not '\n'
  the reason is when you press enter (equivalent to newline '\n)
the function returns the integer value.

int strindex(char s[], char p[]);
in this function we check if each line of char s[] matches with the pattern;
 for(i=0;s[i]!='\0';i++)  ------------->this loop we require cozwe can trace each word that matches with the pattern
    
        for(j=i,k=0;p[k]!='\0' && s[j]==p[k];j++,k++)   ----> j takes value of i,if the first index i,e s[j]==p[k] is not
        matched the loop is directed back to outermost [i] loop 
         if(k>0 && p[k]=='\0')  
       {
       // printf("k=%d", k);
         return i;
       }
the reason if loop is placed in the for loop coz 
if you notice in line(char [], int) function the '\0' is placed in the last loc of the array so when enter is pressed '\n'
is stored in array which makes the outer i loop run during that time k takes  value of zero after '\n' the next value is '\0'
but when you check for condition
 if(k>0 && p[k]=='\0')  
  takes 0 value; therefore the if is placed in for loop

*/




#include<stdio.h>
#define LIMIT 1000
int line(char [], int);
int strindex(char [], char []);

int main()
{
   char s[LIMIT];
   char pattern[]="must";
   while(line(s,LIMIT)>0)
   {
      if(strindex(s,pattern)>0)
      {
        printf("%s", s);
      }
   }
  return 0;
}

int line(char s[], int limit)
{
    char c;
    int i=0;
    while(--limit>0 && (c=getchar())!=EOF && c!='\n')
    {
       s[i++]=c;
    }
   if(c=='\n')
   {
       s[i++]=c;
   }
   s[i]='\0';
  // printf("%d\n", i);
   return i;

}

int strindex(char s[], char p[])
{
    int i,k,j;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;p[k]!='\0' && s[j]==p[k];j++,k++)
        {
                ;
         } 
         if(k>0 && p[k]=='\0')
       {
       // printf("k=%d", k);
         return i;
       }
       
    }  

  

   return -1;
}