#include <stdio.h>
#define row 80
#define col 80
void read(char [][col], int, int);
void display(char [][col], int, int);
void strcompare(char a[row][col], int rw, int cl);
int main()
{
   char a[row][col], b[row], c[row];
   int rw,cl, i,j;
   printf("enter row no.");
   scanf("%d%d", &rw, &cl);
   read(a,rw,cl);
   strcompare(a,rw,cl);
   display(a,rw,cl);
   return 0;
}

void read(char a[row][col], int rw, int cl)
{
   int i;
   for(i=0;i<rw;i++)
   {
       
          scanf("%s", a[i]);
   }
   
   return;
}   

void display(char a[row][col], int rw,int cl)
{
    int i;
    printf("----------");
 for(i=0;i<rw;i++)
   {
       printf("%s\n", a[i]);
   }

    return ;
}

void strcompare(char a[row][col], int rw, int cl)
{
    
     int i;
     char temp[rw][cl];
 for(i=0;i<rw-1;i++)
   {
       if(a[i][cl]>a[i+1][cl])
       {
           temp[i][cl]=a[i][cl];
           a[i][cl]=a[i+1][cl];
           a[i+1][cl]=temp[i][cl];
       }
   }
    
  printf("----------");
 for(i=0;i<rw;i++)
   {
       printf("%s\n", a[i]);
   }
 
 
 
    return ;
    
}
