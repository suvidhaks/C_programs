#include <stdio.h>
 #include  "C:\Users\Dell\Documents\pgms\size.h"
const int base=2;
 int u_char_8, smax_char_8, smin_char_8;
 int u_shortint_16, smax_shortint_16, smin_shortint_16;
long long int uint_32;
long int maxint_32, minint_32;
//long int ufloat_32, maxfloat_32, minfloat_32;
//long int udouble_64, maxdouble_64, mindouble_64;

long long int power(int,int);
int unsign_char(unsigned char a);
int sign_char(signed char a);
int unsignedshort_integer(unsigned short int number);
int signedshort_integer(signed short int number);
long long  int unsignedint(int);
long int signedint(int);
//long long int unsigneddouble(int);
//long long int signeddouble(int);
int main()
{
   unsigned char a;
   signed char a1;
   unsigned int b;
   signed int b1;
   unsigned  short int c;
    signed  short int c1;
   unsigned long  int d;
     signed long  int d1;
    // int u_char, s_char, s_char1;
   u_char_8= unsign_char('A');
   printf("\n%d", u_char_8);
 smax_char_8=sign_char('a');    
   printf("\n%d", smax_char_8);  
   smin_char_8=-(smax_char_8+1);
   // s_char1=sign_char(-'a'); 
    printf("\n%d",  smin_char_8);  
   u_shortint_16= unsignedshort_integer(12);
       printf("\n%d", u_shortint_16); 
       smax_shortint_16=signedshort_integer(12);
       smin_shortint_16=-(smax_shortint_16+1);
        printf("\n%d \t %d", smax_shortint_16, smin_shortint_16);
        
        
         uint_32= unsignedint(412);
       printf("\n%lld",  uint_32); 
       maxint_32=signedint(112);
       minint_32=-(maxint_32+1);
      // uinteger_32=maxint_32+maxint_32+1;
        printf("\n%lld \t %ld \t %ld", uint_32,maxint_32, minint_32);
        
        
       /* ufloat_32=uint_32;
        maxfloat_32= maxint_32;
        minfloat_32= minint_32;
        
         printf("\n%ld \t %ld \t %ld", ufloat_32,maxfloat_32, minfloat_32);
         
         
        // udouble_64, maxdouble_64, mindouble_64;
         
            udouble_64=unsigneddouble(451233);       
            maxdouble_64=signeddouble(451233); 
            mindouble_64=-(maxdouble_64+1);
            
            printf("\n%ld \t %ld \t %ld", udouble_64,maxdouble_64, mindouble_64);*/


           printf("\n%d", CHAR);
           printf("\n%d", MAX_CHAR);
            
    return 0;
}

 int unsign_char(unsigned char a)
{  
    int j;
    
       j =power(base,8);
       return --j;
}

int sign_char(signed char a)
{  
    int j;
       if(a)
       {
         j =power(base,7);
         return --j;
       }
      /* else if(-a)
       {
            j =power(2,7);
            ++j;
           return j;
       }*/
}


int unsignedshort_integer(unsigned short int number)
{
    
    int j;
    j=power(base,16);
    return --j;
}


int signedshort_integer(signed short int number)
{
    
    int j;
    j=power(base,15);
    return --j;
}


 long long int unsignedint(int number)
{
   long long int k;
    k=power(base,32);
   // printf("value=%ld", k);
    return --k;
}

long int signedint(int number)
{
   long int j;
    j=power(base,31);
    return j;
}

/*long long int unsigneddouble(int number)
{
   long int j;
    j=power(base,64);
    return --j;
}

long long int signeddouble(int number)
{
   long int j;
    j=power(base,63);
    return --j;
}*/



 long long int power(int base,int exponent)
{
    long long int prod=1, i;
     for(i=0;i<exponent;i++)
     {
         prod=prod*base;
     }
    return prod;
}