/*   in this program x is a 5 bit binary number after performing right shift operation the resultant bit field of x will be the value of n 
  which is 3 bit field after performing right shift pos value is 4 because initially x value will be 5 bit binary number
  i,e [4,3,2,1,0 ]      all these are bit positions the MSB will be [4th] location
  After performing right shift the resultant value of x will be 3 bit field so the equation is
  pos+1-n=2, so two bits are moved to LSB 
  with 5 bit field the max value is 31, if x=31 since 2 bits shifted to LSB the resulatant 3 bit  max value is 7
  one can also divide x by pow(2, pos+1-n)  
  2. ~(~0<<n) explaination as follows:
  first compute 1's compliemt of 0,which is 111 and sign magnitude is 1, since its sign magnitude is 1 it is a negative in
  most of the computers 2's compliment of a negative number is stored, therfore convert 111  to its 1's compliment i,e 000 then add +1
  result  is 001,i am taking 3 bits coz n value is 3.
  left shift 001 in positions [0,1,2] to  positions [3,4,5] and reset the values to zero for the positions [0,1,2]
  so the value will be 1000 with sign magnitude 1 so the value is -8.
  now evaluate one more ~(1000) 
  convert to its 1's compliment the result will be 0111 with sign magnitude 0.
  now 111 & 111 is 111 with sign magnitude 0 which is positive number 7.
  
   */

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
    return (x>>pos+1-n) & ~(~0<<n);
}