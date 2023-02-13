#include <stdio.h>
#include<ctype.h>
#define MAX 100
#define NUMBER '0'
double a[MAX];
//char s[MAX];
char buff[MAX];
int bufp=0;
int dp=0;
//int i=0;
int getop(char s[]);
double atofl(char s[]);
void push(double);
double pop(void);
int getch();

int main()
{
    //double d;
    int d;
    int type;
    char s[MAX];
    double op2;
     double val1;
while((type=getop(s))!=EOF)
{
     switch(type)
    {
        
        case NUMBER: 
                     
                      val1=atofl(s);
                     push(atofl(s));
                     
                      break;

         case '+': push(pop() + pop());  
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

             case '\n':      printf("\nresult=%lf", pop());  
                               printf("\ndp=%d", dp);                     
                              break;
    }  
}                

  
    return 0;
}


double atofl(char s[])
{
    
    int  sign;
    int i=0;
    double val, power;
    
    for(;isspace(s[i]);i++);
    sign=(s[i]=='-')?-1:1;
    if(s[i]=='-')
       i++;
    for(val=0.0;isdigit(s[i]);i++)
    {
        val=val*10+s[i]-'0';
    }
    if(s[i]=='.')
    {
        i++;
    }
    for(power=1.0;isdigit(s[i]);i++)
       {
          val=val*10+s[i]-'0';
          power=power*10;
       }
    return sign*(val/power);
}


int getop(char s[])
{
    int i;
    int c;
    
    while((s[0]=c=getch())==' ' || c=='\t');
    s[1]='\0';
    if(!isdigit(c) && c!='.')
    {
        return c;
    }
    i=0;
    if(isdigit(s[i]))
    {
        i++;
    }
    for(;isdigit(s[i]=c=getch());i++);
    if(s[i]=='.')
      i++;
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
   return (bufp>0) ? (buff[--bufp]) : getchar(); 
}


void push(double f)
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


double pop(void)
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








