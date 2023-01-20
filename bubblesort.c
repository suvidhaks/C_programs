#include<stdio.h>
void read(int a[], int n);
void sort(int a[],int n);
void display(int a[],int n);
int main()
{

    int a[10];
    int n;
    
    printf("enter n value");
    scanf("%d", &n);
   read(a,n);
   sort(a,n);
   display(a,n);
   return 0;
}


void read(int a[], int n)
{
    int i;
     printf("enter the elements");
  
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   } 
    
    return;
}


void sort(int a[],int n)
{
   int i,j, temp=0;
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   } 
    
    return;
}


void display(int a[],int n)
{
    int i;
    printf("\nthe sorted elements are:\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t", a[i]);
    }
    
 return ;
}

