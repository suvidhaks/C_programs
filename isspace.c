/*
small peice of function code that returns the value of the function if the first character pressed is space rather than a number
this code also gives calrity on how  while(condition); works 
*/

#include<stdio.h>
#include<ctype.h>
#define size 100
int getop(char[], int);
int main()
{
   char a[size];
   int d;
   
    printf("%d",getop(a,size));
    
   return 0; 
}

int getop(char a[], int siz)
{
    char c;
   // int i=0;
    while((a[0]=c=getchar())==' ' || c=='\t'); // this statement means that the condition is true but it becomes false when enter is pressed
    a[1]='\0';
    if(!isdigit(c))
      return c;
    
}