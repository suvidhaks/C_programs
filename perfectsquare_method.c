/*
this program checks if a given number is perfect square or not;
if it is perfect square; the square root of that perfect square will be displayed;
function to find squareroot of a perfect square usingprime factorization has been implemented;

*/


#include<stdio.h>
#include<math.h>
void perfectsquare(int n);
int main()
{
   int n;
    printf("enter a number");
    scanf("%d", &n);
    perfectsquare(n);
    return 0;
}


void perfectsquare(int n)
{
   int exp=0,  i, flag=1;
   int value=n, fact=1, j=0;
   int prod=1;
   for(i=2;i<value;i++)
   {
      fact=1, j=0;
    while(n%i==0)
    {
        n=n/i;
        exp++;
      //  printf("%d\t%d ", exp,n);
      fact=i;
      j++;
      fact=pow(fact, j/2); // finding square root of a perfect square;
      
    }
    
    if(exp%2!=0 )
    {
        flag=0;
        printf("\n not a aperfect square");
         break;
    }
    else if(exp%2==0)
    {
      prod*=fact;
    }
   }
  // printf("i=%d", i);
   
   //printf("\nsquareroot=%d ", fact);

   // fact=pow(fact, j/2);
    // printf("\n j=%d ", j);
     printf("\nsquareroot=%d ", prod);

   if(flag && n!=value)
  {
    printf("\n  aperfect square");
  }

  else if(n==value)                  // check for prime numbers; they have divisors only 1 and no. itself; they are never paired
    printf("\n not a aperfect square");

return ;
}