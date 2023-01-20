#include <stdio.h>
#define BASE base
#define CHAR u_char_8
#define MAX_CHAR  smax_char_8
#define  MIN_CHAR  smin_char_8
#define  INT_16   u_shortint_16
#define  MAXINT_16   smax_shortint_16
 #define  MININT_16   smin_shortint_16
 #define  INT_32     uint_32
#define  MAXINT_32   maxint_32
 #define  MININT_32   minint_32 
#define MAXFLOAT_32  floatmax_32
#define MINFLOAT_32  floatmin_32
#define MAXDOUBLE_64  max64
#define MINDOUBLE_64  min64


const int base;
 int u_char_8, smax_char_8, smin_char_8;
 int u_shortint_16, smax_shortint_16, smin_shortint_16;
long long int uint_32;
long int maxint_32, minint_32;
double floatmax_32, floatmin_32;
 long double max64, min64;





long long int power(int,int);
int unsign_char(unsigned char a);
void sign_char(signed char a);
int unsignedshort_integer(unsigned short int number);
void signedshort_integer(signed short int number);
long long  int unsignedint(int);
void signedint(int);
double floatpower(int base,int exponent);
double maxfloatrange32(void);
double minfloatrange32(void);
long double longpower(int base,int exponent);
long double maxdoublerange64(void);
long double mindoublerange64(void);
void display(void);




/*int unsign_char(unsigned char a)
{ 
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
        
           
} 


 int unsignedshort_integer(unsigned short int number)
{
    
   
    u_shortint_16=power(base,16);
    --u_shortint_16;
     printf("\nushort=%d", u_shortint_16);
    return u_shortint_16 ;
} 


void signedshort_integer(signed short int number)
{
    
    
    smax_shortint_16=power(base,15);
    --smax_shortint_16;
    printf("\nmaxshort=%d", smax_shortint_16);
    smin_shortint_16=-(smax_shortint_16+1);
    printf("\nminshort=%d", --smin_shortint_16);
    
} 


 long long int unsignedint(int number)
{
   
    uint_32=power(base,32);
    --uint_32;
    printf("\nint value=%lld", uint_32);
    return uint_32;
} 

 void signedint(int number)
{
    maxint_32=power(base,31);
    --maxint_32;
    printf("\nmax int value=%ld", maxint_32);
    minint_32=-(maxint_32+1);
    printf("\nmin int value=%ld", minint_32);
    return ;
}







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
    printf("%d", BASE);
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
} */






