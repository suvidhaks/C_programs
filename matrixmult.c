#include <stdio.h>
#define row 10
#define col 10
void read(int [row][col], int [row][col], int, int, int);
void matrixmul(int a[row][col], int b[row][col], int c[row][col], int ro, int cl, int bcol);
void initialize(int c[row][col], int r, int cl);
void  display(int [row][col], int [row][col], int ro, int cl, int bcol);
void square_matrixmul(int a[row][col], int b[row][col], int c[row][col], int ro, int cl, int bcol);
int main()
{
    int a[row][col];
    int b[row][col];
    int c[row][col];
    int ro,cl,bcol;
    printf("enter row & column of A\n");
    scanf("%d", &ro);
    printf("\nenter column of A");
    scanf("%d", &cl);
    printf("\nenter column of B");
    scanf("%d", &bcol);
    read(a, b, ro,cl,bcol);
    initialize(c,  ro, bcol);
    square_matrixmul(a, b, c, ro, cl, bcol);
    display(a,b,ro,cl,bcol);
    return 0;
}


void read(int a[row][col], int b[row][col], int ro, int cl, int bcol)
{
    int i,j;
    printf("enter A elements");
    for(i=0;i<ro;i++)
    {
         for(j=0;j<cl;j++)
         {
             scanf("%d", &a[i][j]);
         }
    }
    
    printf("\nenter B elements");
     for(i=0;i<cl;i++)
    {
         for(j=0;j<bcol;j++)
         {
             scanf("%d", &b[i][j]);
         }
    }
    
    return ;
}


void initialize(int c[row][col], int ro, int bcol)
{
    int i, j;
    for(i=0;i<ro;i++)
    {
         for(j=0;j<bcol;j++)
         {
            c[i][j]=0;
         }
    }
    
    return ;
}



void matrixmul(int a[row][col], int b[row][col], int c[row][col], int ro, int cl, int bcol)
{
    
     int i,j,k;
     for(i=0;i<ro;i++)
     {
         for(j=0;j<cl;j++)
         {
             for(k=0;k<bcol;k++)
             {
               c[i][k]+=a[i][j]*b[j][k];   
             }
         }
     }

printf("-----------------------------------------");
 printf("elements of C matrix are:");
 printf("\n");
    for(i=0;i<ro;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


    return;
    
}



void square_matrixmul(int a[row][col], int b[row][col], int c[row][col], int ro, int cl, int bcol)
{
    
     int i,j,k;
     for(i=0;i<ro;i++)
     {
         for(j=0;j<cl;j++)
         {   c[i][j]=0;
             for(k=0;k<bcol;k++)
             {
               c[i][j]+=a[i][k]*b[k][j];   
             }
         }
     }

printf("-----------------------------------------");
 printf("elements of C matrix are:");
 printf("\n");
    for(i=0;i<ro;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


    return;
    
}




void  display(int a[row][col], int b[row][col], int ro, int cl, int bcol)
{
    
    int i,j;
    printf("elements of matrix A are:\n");
    for(i=0;i<ro;i++)
    {
        for(j=0;j<cl;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
   
    printf("elements of matrix B are:\n");
    for(i=0;i<cl;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }


    return ;
}


