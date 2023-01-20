
#include <stdio.h>
#define MAX 100
void read(int a[MAX], int n, int);
void sort(int [], int);
void frequency(int [], int b[], int);

int main()
{   
    int a[MAX], b[MAX], n, marks;
    printf("enter n value:");
    scanf("%d", &n);
    printf("enter max marks:");
    scanf("%d", &marks);
    printf("enter marks");
    read(a,n,marks);
    sort(a,n);
    frequency(a,b,n);
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


void frequency(int a[MAX], int b[MAX], int n)
{
    int frequency, i, j, temp=1, m=0, n1;
    printf("\nmarks \t\t frequency\n");
    printf("---------------------\n");
    int incr=1;
    for(i=0;i<n;i++)
    {     
          
          frequency=1;
          for(j=i+1;j<n;j++)
          {
              if(a[i]==a[j])
              {
                 frequency++;
                 b[m]=j;
                 m++;
              }
             // else
             //  goto label1;
          }
       //  incr=frequency;
           //      i=i+incr;
       //  label1:  printf("%d\t\t%d", a[i], frequency);  
             //      printf("\n");
         
          if(frequency >1)
          {
             printf("%d\t\t%d", a[i], frequency);  
             printf("\n");
          }

         // incr=1;
        /*  else
          {
             printf("%d\t\t%d", a[i], temp);  
             printf("\n");
          }*/
          
    }
     printf("\n");
     printf("the elements of b[i] are:");
    for(n1=0;n1<m;n1++)
    {
      // if(n1==b[n1])
        printf("%d\t", b[n1]);
    }
int i1=0,i2;
  for(i2=0,i1=(2*m)-1;i2<m;i2++,i1--)
    {  

               b[i1]=b[i2]-1;
       
        //if(i==b[i1])
       // printf("%d\t", b[n1]);
    }
   

int temp1,i3,j1,i4;
 for(i3=0;i3<(2*m)-1;i3++)
 {
      for(j1=i3+1;j1<=(2*m)-1;j1++)
          {
              if(b[i3]>b[j1])
              {
                  temp1=b[i3];
                  b[i3]=b[j1];
                  b[j1]=temp1;
              }
              
          }
    }

 
   printf("\n new elements of b[i] are:\n");
    for(i=0;i<=(2*m)-1;i++)
        printf("%d\t", b[i]);     
printf("\n");
for(i4=2*m;i4<n;i4++)
{
    b[i4]=-1;              

}

printf("\n");
printf("equal size b[i] are:");
int i5,i6;
for(i5=0;i5<n;i5++)
{
     printf("%d\t", b[i5]);  
}

printf("\n");
printf("equal size a[i] are:");

for(i6=0;i6<n;i6++)
{
    if(i6==b[i6])
      continue;
      else
        printf("%d\t", a[i6]);  
}

  return;  
}



