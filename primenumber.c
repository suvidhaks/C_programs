#include<stdio.h>
unsigned int prime(unsigned int start, unsigned int end);
int main()
{
    
   unsigned int count, start, end,flag;
    printf("enter start and  end value");
    scanf("%d%d", &start, &end);
   if( end <start)
   {
       printf("enter valid ranges of start and end");
   }
    if(start>=1 && end>=start)
    {printf("the prime numbers are:\n");
     count=prime(start,end);
      printf("\nthere are %d prime numbers between %d and %d", count, start,end);
    }
    
      return 0;
}

unsigned int prime(unsigned int start, unsigned int end)
{
   int flag, count=0,i,j;
     for(i=start;i<=end;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if(flag && i!=1)
        {
          printf("%d\t", i);
          count++;
        }
    }
    return count;
}    
        
        