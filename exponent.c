#include<stdio.h>
int power(int,int);
int main()
{

    int exp, i;
    int base, prod;
   // printf("enter the base number");
   // scanf("%d", &base);
    printf("\nenter the exponent number");
    scanf("%d", &exp);
  prod=power(base,exp);
printf("\nthe value of the exponent is=%d,\t%d", power(2,exp), power(-3,exp));
return 0;
}

int power(int base, int exp)
{  
    int prod=1,i;
     for(i=1;i<=exp;i++)
    {
        prod=prod*base;
    }
    return prod;
}