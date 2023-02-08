/*
double atofl(char[]); in function the line
 power=power*10;   // this line keeps count for the number of digits after decimal point  
 we keep track of power coz the entire decimal part is converted to integer part and it is 
 stored in val; so to restore it back to decimal we divide the integer part with power.

*/

#include <stdio.h>
#include<ctype.h>
#define LIMIT 1000
double atofl(char[]);
int main()
{
    char s[LIMIT] ;
   
    int len;
   double i,sum=0.0;
    int line(char s[], int max); // this  is function declaration; it can be declared in main as well 
 //  len= line(s,LIMIT);
    
   while(line(s,LIMIT)>0)
   {
       sum+=atofl(s);
   }
    
    // printf("\n%d", len);
     printf("\n%.4lf", sum);
    return 0;
}

double atofl(char s[])
{
    int i, sign;
    double val, power;
    for(i=0; isspace(s[i]);i++); // checks for first loc of an array ifspace then 1 is returned else 0 is returned
    sign=(s[i]=='-')?-1:1; // i must be incremented so that it points to next loc in an array
   // printf("%d", sign);
    if(s[i]=='+' || s[i]=='-') // increments the loc so that next loc will contain digit
    {
        i++;
    }
    for(val=0.0;isdigit(s[i]);i++) //isdigit returns 1 for numbers [0-9] else returns 0;  means condition failed
    {
        val=val*10+s[i]-'0';
    }
    if(s[i]=='.')
       i++;
    for(power=1.0;isdigit(s[i]);i++) 
    {
           val=val*10+s[i]-'0';
           power=power*10;   // this line keeps count for the number of digits after decimal point  
                                   
    }
    return (sign*((val)/power));
}



int line(char s[], int max)
{
    int i=0;
    char c;
    while(--max>0 && (c=getchar())!=EOF && c!='\n')
    {
        s[i++]=c;
    }
    if(c=='\n')
    {
        --i;
    }
    return i;
}





