#include <stdio.h>
#include <string.h>
#define  row 20
#define col 20

void read(char [][col], int,int);
void reorder(char a[row][col], int m, int n);
void display(char a[row][col], int m, int n);

int main()
{
  char a[row][col];
  int  m, n;
  printf("enter m and n value");
  scanf("%d%d", &m, &n);
  read(a,m,n);
  reorder(a,m,n);
  display(a,m,n);
    return 0;
}

void reorder(char a[row][col], int m, int n)
{
    
    int i, second;
    char temp[n];
    for(i=0;i<m-1;i++)
    {
        for(second=i+1; second<m; second++)
        {
           if(strcmp(a[i], a[second])>0) //strcmp(); works for word comparison;
           {
               strcpy(temp, a[i]);
               strcpy(a[i],a[second]);
               strcpy(a[second],temp);
           }
        }
        
    }
    return ;
}


void read(char a[row][col], int m, int n)
{
    int i;
    printf("enter array elements");
    for(i=0;i<m;i++)
    {
        scanf("%s", a[i]);
    }
    return ;
}


void display(char a[row][col], int m, int n)
{
    int i;
    printf("enter array elements are:");
    for(i=0;i<m;i++)
    {
        printf("%s\n", a[i]);
    }
    return ;
}




