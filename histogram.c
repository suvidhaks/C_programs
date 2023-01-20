
#include <stdio.h>
#define max 80
#define N 26
int read(char []);
void sort(char[], int);
void histogram( int[],int);
void char_array(char [], int );
void chararray_display(char [], int);
void chararray_display1(char [], int);
void initialize(int[], int);
void histogram_display(int [], int);
int main()
{
    char a[max],c[max];
    int b[max];
    int i, j;
     // i=read(a);
     // sort(a,i);
      initialize(b,N);
     
      chararray_display1(c, N); 
       histogram(b,N);
     // histogram_display(b, i);
    //  printf("%d", i);
    return 0;
}


void chararray_display1(char b[max], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]='A'+i;
    }
    printf("%d", i);
    b[i]='\0';
    printf("the elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%c\t", b[i]);
    }
    
    return;
}




int read(char a[max])
{
    int i=0, other=0;
    char c;
    while((c=getchar())!=EOF)
    {
        if(c>='a' && c<='z')
        {
            a[i]='A'+c-'a';
            i++;
        }
         else if(c>='A' && c<='Z')
        {
            a[i]=c;
            i++;
        }
        else
        {
            other++;
        }
       
    }
     return i;
}


void sort(char a[max], int n)
{
    char temp[max];
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp[i]=a[i];
                a[i]=a[j];
                a[j]=temp[i];
            }
        }
    }
    return;
}

void histogram( int b[max],int n)
{
    int i=0,j, other=0;
    char c;
    printf("enter the characters");
    while((c=getchar())!=EOF)
    {
        if(c>='A' && c<='Z')
        {
           ++b[c-'A'];
        }
        else
        {
            other++;
        }
    }
   histogram_display(b,n);
    return ;
}


void initialize(int b[max], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
    return;
}






void chararray_display(char a[max], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%c\t", a[i]);
    }
    
}

void histogram_display(int b[max], int n)
{
    int i;
 for(i=0;i<n;i++)
    {
        printf("[%d]=%d,", i, b[i]);
        printf("\t");
    }

}
