/*
this program works for integer values
input: 1 2 - 4 5 + *
o/p: -9
*/




#include <stdio.h>
#include<ctype.h>
#define MAX 100
#define NUMBER '0'
int a[MAX];
//char s[MAX];
char buff[MAX];
int bufp=0;
int dp=0;
//int i=0;
int getop(char s[]);
int asint(char s[]);
void push(int);
int pop(void);
int getch();

int main()
{
    //double d;
    int d;
    int type;
    char s[MAX];
    int op2;
     int val1;
     int a,b;
while((type=getop(s))!=EOF)
{
     switch(type)
    {
        
        case NUMBER: 
                     
                      val1=asint(s);
                     push(asint(s));  // atofl() is passed as an argument since the return type of atofl is double; and push accepts the arg double
                     
                      break;

         case '+': push(pop() + pop());  //pop returns double;
                   // printf("\nlf=%lf", a[dp]);    
                    break;

         case '*' :  push(pop() * pop());  
                   // printf("\nlf=%lf", a[--dp]); 
                     break;

           case '-' : op2=pop();
                       push(pop() - op2);
                        // printf("\nlf=%lf", a[dp]);
                       break;

            case '/' : op2=pop();
                        if(op2!=0)
                        {
                           push(pop() / op2);
                        }
                         // printf("\nlf=%lf", a[dp]);
                       break; 

            case '%' : b=pop();
                       a=pop();    
                       if(a>=0 && b!=0) 
                       {
                         if(b>a)
                         {
                            push(a);
                         }           
                       else
                        {
                           push(a%b);
                        }
                       }
                        break;
             case '\n':      printf("\nresult=%d", pop());  
                              // printf("\ndp=%d", dp);                     
                              break;
    }  
}                

  
    return 0;
}


int asint(char s[])  // in this function only base address of s is passed everytime the function is called;
{
    
    int  sign;
    int i=0;
    int val;
    
    for(;isspace(s[i]);i++);
    sign=(s[i]=='-')?-1:1;
    if(s[i]=='-')
       i++;
    for(val=0;isdigit(s[i]);i++)
    {
        val=val*10+s[i]-'0';
    }
   
    return sign*(val);
}


int getop(char s[])
{
    int i;
    int c;
    
    while((s[0]=c=getch())==' ' || c=='\t');  //  the significance of this while loop is if you encounter space it; the function returns the value
    s[1]='\0';
    if(!isdigit(c))
    {
        return c;
    }
    i=0;
    if(isdigit(s[i]))
    {
        i++;
    }
    for(;isdigit(s[i]=c=getch());i++);
    s[i]='\0';
    if(c!=EOF)
    {
        buff[bufp++];
    }
    return NUMBER;
}



int getch()
{
   return (bufp>0) ? (buff[--bufp]) : getchar(); // in this function if we encounter characters like \n  we push it to the char buff[];
}


void push(int f)
{
    if(dp<MAX)
    {
         a[dp++]=f;
        
    }
   else
   {
       printf("stack is full");
   }
    
}


int pop(void)
{
    if(dp>0)
    {
        return a[--dp];
    }
    else
    {
     printf("stack is empty");
     return 0.0;
    }
}








