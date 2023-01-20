#include<stdio.h>
long long int power(int base,int exponent)
{
  long  long int prod=1, i;
     for(i=0;i<exponent;i++)
     {
         prod=prod*base;
     }
    return --prod;
}

int main()
{
   long long int k;
    k=power(2,32);
    printf("%lld", k);
    return 0; 
}