
#include <stdio.h>
#define MAX 100
void read(int a[MAX], int n, int);
void sort(int [], int);
void frequency(int [], int);

int main()
{   
    int a[MAX], n, marks;
    printf("enter n value:");
    scanf("%d", &n);
    printf("enter max marks:");
    scanf("%d", &marks);
    printf("enter marks");
    read(a,n,marks);
    sort(a,n);
    frequency(a,n);
    return 0;
}

void read(int a[MAX], int n, int marks)
{
    int i;
     for(i=0;i<n;i++)
     {
         scanf("%d", &a[i]);
         if(a[i]>marks)
           printf("entered marks is out of range");
     }
     return;
}


void sort(int a[MAX], int n)
{
    int i,j, temp;
    for(i=0;i<n-1;i++)
    {
          for(j=i+1;j<n;j++)
          {
              if(a[i]>a[j])
              {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
              }
              
          }
    }
    
     for(i=0;i<n;i++)
     {
         printf("%d\t", a[i]);
     }
     printf("\n");
    return;
}


void frequency(int a[MAX], int n)
{
    int frequency=0, i, j, temp=1, m=0, n1;
    printf("\nmarks \t\t frequency\n");
    printf("---------------------\n");
    int incr=0;
    for(i=0;i<n;i=i+incr)
    {     
         frequency=1;
          for(j=i+1;j<n;j++)
          {
              if(a[i]==a[j])
              {
                 frequency++;
              }
          
          }
     
         incr=frequency;
          if(frequency >1)
          {  printf("\n");
             printf("%d\t\t%d", a[i], frequency);  
             printf("\n");
          }
        else
        {
              printf("\n");
               printf("%d\t\t%d", a[i], frequency);
               printf("\n");
        }
              
    }
    
  return;  
}



