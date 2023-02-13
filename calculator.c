/*
in this program we are using three arrays 1. char s[] 2. double a[] 3. char buff[];
int getop(char s[]) // takes the inputs from the user through getch() function
now since the characters are converted to  long float values give space between each operand
e.g: input : 1.0 2.0 +
space is given between the operands when operator is encountered the arithmetic operation on operands is performed.
the reason to give space is a signal is given to the function getop that reading into the first operand is over;
when space is encountered the getop() fun is executed if the entered char is  ' ' the function returns int value of ' ' ascii;
in push(atofl((s)));
atofl returns double
double atofl(char s[]);
everytime getop(char s[]) is called the base address of s is passed;

note: this program works only for binary operands
the inputs must be given in float values only
*/




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
                     push(atofl(s));  // atofl() is passed as an argument since the return type of atofl is double; and push accepts the arg double
                     
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

             case '\n':      printf("\nresult=%lf", pop());  
                               printf("\ndp=%d", dp);                     
                              break;
    }  
}                

  
    return 0;
}


double atofl(char s[])  // in this function only base address of s is passed everytime the function is called;
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
    
    while((s[0]=c=getch())==' ' || c=='\t');  //  the significance of this while loop is if you encounter space it; the function returns the value
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
   return (bufp>0) ? (buff[--bufp]) : getchar(); // in this function if we encounter characters like \n  we push it to the char buff[];
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








