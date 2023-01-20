#include <stdio.h>
#include "size.h"
const int base=2;
 int u_char_8, smax_char_8, smin_char_8;
 int u_shortint_16, smax_shortint_16, smin_shortint_16;
long long int uint_32;
long int maxint_32, minint_32;
double floatmax_32, floatmin_32;
 long double max64, min64;

/*long long int power(int,int);
int unsign_char(unsigned char a);
void sign_char(signed char a);
int unsignedshort_integer(unsigned short int number);
void signedshort_integer(signed short int number);
long long  int unsignedint(int);
void signedint(int);
void display(void);*/

int main()
{
   
  

   u_char_8= unsign_char('A');



    sign_char('a');    

  

   u_shortint_16= unsignedshort_integer(12);

  

       signedshort_integer(12);

 
        
        
         uint_32=unsignedint(412);

      

      signedint(112);
        
          floatmin_32=minfloatrange32();

         floatmax_32=maxfloatrange32();


         max64=maxdoublerange64();

         min64=mindoublerange64();


         printf("\n%Lf  \n %Lf", max64, min64);

     
         display();
            
    return 0; 
}


 int unsign_char(unsigned char a)
{  
   // int j;
    
       u_char_8 =power(base,8);
       --u_char_8;
    //   printf("\nuchar=%d", u_char_8);
       return u_char_8;
}

void sign_char(signed char a)
{  
    

         smax_char_8 =power(base,7);
         --smax_char_8;
      //    printf("\nsmax=%d", smax_char_8);
          smin_char_8=-(smax_char_8+1);
       //  printf("\nsmin=%d", smin_char_8);
        // return smax_char_8;
           
}


int unsignedshort_integer(unsigned short int number)
{
    
   // int j;
    u_shortint_16=power(base,16);
    --u_shortint_16;
    // printf("\nushort=%d", u_shortint_16);
    return u_shortint_16 ;
}


void signedshort_integer(signed short int number)
{
    
    //int j;
    smax_shortint_16=power(base,15);
    --smax_shortint_16;
   // printf("\nmaxshort=%d", smax_shortint_16);
    smin_shortint_16=-(smax_shortint_16+1);
  //  printf("\nminshort=%d", --smin_shortint_16);
    //return --j;
}


 long long int unsignedint(int number)
{
   //long long int k;
    uint_32=power(base,32);
    --uint_32;
   // printf("\nint value=%lld", uint_32);
    return uint_32;
}

 void signedint(int number)
{
   //long int j;
    maxint_32=power(base,31);
    --maxint_32;
   // printf("\nmax int value=%ld", maxint_32);
    minint_32=-(maxint_32+1);
   // printf("\nmin int value=%ld", minint_32);
    return ;
} 



double maxfloatrange32(void)
{
   double value;
   value=floatpower(base,127);
   printf("value=%lf", value);
   return 2*value;
}

double minfloatrange32(void)
{
   double value, lvalue, a=1;
   value=floatpower(base, 126);
   lvalue=a/value;
   printf("value=%lf", value);
   return lvalue;

}

/*float maxfloatrange32(void)
{
   float value;
   value=floatpower(base,127);
   printf("value=%lf", value);
   return 2*value;
}*/

double floatpower(int base,int exponent)
{
    double prod=1;
     int i;
     for(i=0;i<exponent;i++)
     {
         prod=prod*base;
     }
    return prod;
}


long double longpower(int base,int exponent)
{
    long double prod=1;
     int i;
     for(i=0;i<exponent;i++)
     {
         prod=prod*base;
     }
        printf("\ndouble value=%Lf", prod);
    return prod;
}

long double maxdoublerange64(void)
{
    long double result;
    result=longpower(base,1023);
     printf("max double value=%Lf", result);
    return 2*result;
}

long double mindoublerange64(void)
{
   long double value, lvalue, a=1;
   value=longpower(base, 1023);
   lvalue=a/value;
   return lvalue;

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
    printf("\n%lf",  MAXFLOAT_32);  
    printf("\n%.38lf",  MINFLOAT_32);      
   // printf("\n%Lf",  MAXDOUBLE_64);  
   // printf("\n%Lf",  MINDOUBLE_64);                     
    return ;
}


