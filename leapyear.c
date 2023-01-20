#include <stdio.h>
#define MAX 100

void display(int a[MAX], int n, int startyear, int endyear);
int leapyear(int a[MAX], int startyear,int endyear);

int main()
{
    int a[MAX], i, count, startyear, endyear;
    
    printf("enter starting year and ending year");
    scanf("%d%d", &startyear, &endyear);
    //n=(endyear - startyear) +1 ;
   // n=n/4;
   // printf("%d",n);

   /* for(i=0;i<n;i++)
    {
        a[i]=startyear+i*sizeof(int);
    }*/

   // display(a,n);

    
     count=leapyear(a,startyear,endyear);
      display(a,count,startyear,endyear);
    
    return 0;
}




void display(int a[MAX], int n, int startyear, int endyear)
{
    int i;
     printf("There are %d leap years between %d and %d\n", n, startyear, endyear);
    for(i=0;i<n;i++)
    {
       
        printf("%d \t", a[i]);
    }
    return ;
}


int leapyear(int a[MAX], int startyear,int endyear)
{
    int i, j=0;
    for(i=startyear;i<=endyear;i++)
    {
        if((i%4==0 && (i%100)!=0) || i%400==0)
        {
            //printf("\n%d is a leap year", a[i]);
            a[j]=i;
            j++;
        }
    }
  //  printf("\nflag value=%d",flag);
    return j;
}

