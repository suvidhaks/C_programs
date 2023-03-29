// program tocheck ifa givne number is  perfect square or not;
#include <stdio.h>
#include <math.h>
void rangoli();
int main()
{
    float n,b, diff;
    int a;
    printf("enter b");
    scanf("%f", &b);
    n=sqrt(b);
    a=n;
    diff=n-a;
    printf("%.1f", diff);
    if(diff==0.0)
      printf("perfect square");
      else
         printf(" not a perfect square");
         printf("\n.........................");
         rangoli();
    return 0;
}


void rangoli()
{
   
     int i, j;
   printf("\n");
  for(i=0;i<15;i++)
  {
      for(j=0;j<=i;j++)
      {
          printf("* ");
         
      }
       printf("\n");
  }
    return ;
}

