
#include <stdio.h>
#define MAX 100

int minimum(int [],int);
int maximum(int a[],int n);

int main()
{
    int i, n,min,max;
    int a[MAX];
    printf("enter n");
    scanf("%d", &n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    min=minimum(a, n);
    max=maximum(a, n);
    printf("\n minimum value=%d", min);
     printf("\n maximum value=%d", max);
    return 0;
}

int minimum(int a[],int n)
{
   int temp=a[0], i;
   for(i=1;i<n;i++)
   {
       if(a[i]<temp)
       {
           temp=a[i];
       }
   }
    return temp;
}

int maximum(int a[],int n)
{
   int temp=a[0], i;
   for(i=1;i<n;i++)
   {
       if(a[i]>temp)
       {
           temp=a[i];
       }
   }
    return temp;
}


