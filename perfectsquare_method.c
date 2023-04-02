#include<stdio.h>
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
   int value=n;

   for(i=2;i<value;i++)
   {
    while(n%i==0)
    {
        n=n/i;
        exp++;
      //  printf("%d\t%d ", exp,n);
    }
    if(exp%2!=0 )
    {
        flag=0;
        printf("\n not a aperfect square");
         break;
    }
   }
  // printf("i=%d", i);
   

   if(flag && n!=value)
  {
    printf("\n  aperfect square");
  }

  else if(n==value)                  // check for prime numbers; they have divisors only 1 and no. itself; they are never paired
    printf("\n not a aperfect square");

return ;
}