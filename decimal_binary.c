/*
using single integer variable; 
decimal is converted to binary number with unsigned int ; max 10 bits can be set by checking the max number for overflow ;
array has been avoided to save memory but if you wish to check for higher values of higher decimal values 
e.g: 2048; go for long ;
this program is executed on the onlie commpiler machine which provides 8 byes for unsigned long int;
check memory size of your machine and then pass the value of n accordingly;
*/


#include <stdio.h>
#include<math.h>
unsigned long int decimal_binary(unsigned int n);
int main()
{
    printf("%lu", decimal_binary(2048));
     // printf("\n%ld", sizeof(unsigned long int));
    return 0;
}


unsigned long int decimal_binary(unsigned int n)
{
    int i=0, rem;
    unsigned long int  bin=0;
    while(n)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*pow(10, i);
        i++;
    }
    return bin;
}