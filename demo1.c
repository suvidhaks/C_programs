#include <stdio.h>
#include "size.h"
const int base=2;
 int u_char_8, smax_char_8, smin_char_8;
 int u_shortint_16, smax_shortint_16, smin_shortint_16;
long long int uint_32;
long int maxint_32, minint_32;


/*#define BASE base
#define CHAR u_char_8
#define MAX_CHAR  smax_char_8
#define  MIN_CHAR  smin_char_8
#define  INT_16   u_shortint_16
#define  MAXINT_16   smax_shortint_16
 #define  MININT_16   smin_shortint_16
 #define  INT_32     uint_32
#define  MAXINT_32   maxint_32
 #define  MININT_32   minint_32 */



/*#include <stdio.h>
 #include  "C:\Users\Dell\Documents\pgms\size.h"
const int base=2;
 int u_char_8, smax_char_8, smin_char_8;
 int u_shortint_16, smax_shortint_16, smin_shortint_16;
long long int uint_32;
long int maxint_32, minint_32;*/
//long int ufloat_32, maxfloat_32, minfloat_32;
//long int udouble_64, maxdouble_64, mindouble_64;

long long int power(int,int);
int unsign_char(unsigned char a);
void sign_char(signed char a);
int unsignedshort_integer(unsigned short int number);
void signedshort_integer(signed short int number);
long long  int unsignedint(int);
void signedint(int);
void display();
//void assign();
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
  // printf("\n%d", u_char_8);
 sign_char('a');    
   //printf("\n%d", smax_char_8);  
 //  smin_char_8=-(smax_char_8+1);
   // s_char1=sign_char(-'a'); 
   // printf("\n%d",  smin_char_8);  
   u_shortint_16= unsignedshort_integer(12);
     //  printf("\n%d", u_shortint_16); 
       signedshort_integer(12);
      // smin_shortint_16=-(smax_shortint_16+1);
       // printf("\n%d \t %d", smax_shortint_16, smin_shortint_16);
        
        
         uint_32=unsignedint(412);
      // printf("\n%lld",  uint_32); 
       signedint(112);
       //minint_32=-(maxint_32+1);
      // uinteger_32=maxint_32+maxint_32+1;
       // printf("\n%lld \t %ld \t %ld", uint_32,maxint_32, minint_32);
        
        
       /* ufloat_32=uint_32;
        maxfloat_32= maxint_32;
        minfloat_32= minint_32;
        
         printf("\n%ld \t %ld \t %ld", ufloat_32,maxfloat_32, minfloat_32);
         
         
        // udouble_64, maxdouble_64, mindouble_64;
         
            udouble_64=unsigneddouble(451233);       
            maxdouble_64=signeddouble(451233); 
            mindouble_64=-(maxdouble_64+1);
            
            printf("\n%ld \t %ld \t %ld", udouble_64,maxdouble_64, mindouble_64);*/


         //printf("\nc=%d", CHAR);
          // printf("\nmax=%d", MAX_CHAR);
           //assign();
          display();
            
    return 0; 
}

 int unsign_char(unsigned char a)
{  
   // int j;
    
       u_char_8 =power(base,8);
       --u_char_8;
       printf("\nuchar=%d", u_char_8);
       return u_char_8;
}

void sign_char(signed char a)
{  
    

         smax_char_8 =power(base,7);
         --smax_char_8;
          printf("\nsmax=%d", smax_char_8);
          smin_char_8=-(smax_char_8+1);
         printf("\nsmin=%d", smin_char_8);
        // return smax_char_8;
           
}


int unsignedshort_integer(unsigned short int number)
{
    
   // int j;
    u_shortint_16=power(base,16);
    --u_shortint_16;
     printf("\nushort=%d", u_shortint_16);
    return u_shortint_16 ;
}


void signedshort_integer(signed short int number)
{
    
    //int j;
    smax_shortint_16=power(base,15);
    --smax_shortint_16;
    printf("\nmaxshort=%d", smax_shortint_16);
    smin_shortint_16=-(smax_shortint_16+1);
    printf("\nminshort=%d", --smin_shortint_16);
    //return --j;
}


 long long int unsignedint(int number)
{
   //long long int k;
    uint_32=power(base,32);
    --uint_32;
    printf("\nint value=%lld", uint_32);
    return uint_32;
}

 void signedint(int number)
{
   //long int j;
    maxint_32=power(base,31);
    --maxint_32;
    printf("\nmax int value=%ld", maxint_32);
    minint_32=-(maxint_32+1);
    printf("\nmin int value=%ld", minint_32);
    return ;
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


void display()
{
    printf("\n%d", BASE);
    printf("\n%d", CHAR);
    printf("\n%d", MAX_CHAR);
    printf("\n%d", MIN_CHAR);
    printf("\n%d", INT_16);
     printf("\n%d", MAXINT_16);
      printf("\n%d", MININT_16);
       printf("\n%lld", INT_32);
        printf("\n%ld", MAXINT_32);
         printf("\n%ld", MININT_32);
         return ;
}


/*void assign()
{
    // BASE = base;
 CHAR = u_char_8;
 MAX_CHAR = smax_char_8;
  MIN_CHAR = smin_char_8;
  INT_16  = u_shortint_16;
 MAXINT_16  = smax_shortint_16;
   MININT_16 =  smin_shortint_16;
   INT_32   =  uint_32;
 MAXINT_32  = maxint_32;
  MININT_32   =minint_32 ;
  return ;
}*/