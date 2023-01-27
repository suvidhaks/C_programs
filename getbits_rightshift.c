/*   in this program x is a 5 bit binary number after performing right shift operation the resultant bit field of x will be the value of n 
  which is 3 bit field after performing right shift pos value is 4 because initially x value will be 5 bit binary number
  i,e [4,3,2,1,0 ]      all these are bit positions the MSB will be [4th] location
  After performing right shift the resultant value of x will be 3 bit field so the equation is
  pos+1-n=2, so two bits are moved to LSB 
  with 5 bit field the max value is 31, if x=31 since 2 bits shifted to LSB the resulatant 3 bit  max value is 7
  one can also divide x by pow(2, pos+1-n)   */

#include <stdio.h>
unsigned int getbits(int x, int pos, int n );

int main()
{  
    int y;
    y=getbits(31, 4,3 );
    printf("%d", y);

    return 0;
}

unsigned int getbits(int x, int pos, int n )
{
    return x>>pos+1-n;
}