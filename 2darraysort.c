#include<stdio.h>
#define row 20
#define col 20
void read(int a[row][col], int, int);
void sortele(int a[row][col], int r, int c);
void sortrow(int a[row][col], int, int);
void sortcol(int a[row][col], int, int);
void display(int a[row][col], int, int);
void frequency(int a[row][col], int r, int c);
int main()
{
    int a[row][col];
    int r,c;
    printf("enter rows and columns");
    scanf("%d%d", &r, &c);
    read(a,r,c);
   
sortele(a,r,c);
     display(a,r,c);
    sortrow(a,r,c);
   display(a,r,c);
   frequency(a,r,c);
  //  sortcol(a,r,c);
  //  display(a,r,c);
     
   // display(a,r,c);
}

void read(int a[row][col], int r, int c)
{
    int i,j;
     printf("enter the elements into matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            scanf("%d",&a[i][j]);
            
        }
    }
       
    return;   
}



void sortele(int a[row][col], int r, int c)
{
    
    int i,j,k,m, temp=0;
    for(i=0;i<r-1;i++)
    {
          for(j=0;j<c;j++) 
          {
            
        for(k=i+1;k<r;k++) 
        {
      for(m=0;m<c;m++)  
      {
           
           
               if(a[i][j]>a[k][m])
               {
                   temp=a[i][j];
                   a[i][j]=a[k][m];
                   a[k][m]=temp;
               }
           }
      }
          }
    }
   
    
    return ;
}












void sortrow(int a[row][col], int r, int c)
{
    
    int i,j,k, temp=0;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c-1;j++)  
      {
           for(k=j+1;k<c;k++) 
           {
               if(a[i][j]>a[i][k])
               {
                   temp=a[i][j];
                   a[i][j]=a[i][k];
                   a[i][k]=temp;
               }
           }
      }
    }
    
    
    return ;
}



void sortcol(int a[row][col], int r, int c)
{
    
    int i,j,k, temp=0;
    for(j=0;j<c;j++)
    {
      for(i=0;i<r-1;i++)  
      {
           for(k=i+1;k<r;k++) 
           {
               if(a[i][j]>a[k][j])
               {
                   temp=a[i][j];
                   a[i][j]=a[k][j];
                   a[k][j]=temp;
               }
           }
      }
    }
    
    
    return ;
}











void display(int a[row][col], int r, int c)
{
    int i,j;
     printf(" the elements of matrix are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            printf("%d\t",a[i][j]);
            
        }
           printf("\n");
    }
       
       return;
}


void frequency(int a[row][col], int r, int c)
{

 int i,j, freq=0, freq1=0,freq2=0,freq3=0,freq4=0,freq5=0,freq6=0,freq7=0, temp;
    // printf(" the elements of matrix are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            if(a[i][j]>=20 && a[i][j]<30)
            {
                 freq++ ;
            }
           else if (a[i][j]>=30 && a[i][j]<=39) 
           {
                freq1++; 
           }
            else if(a[i][j]>=40 && a[i][j]<=49) 
            {
                 freq2++; 
            }
           else if (a[i][j]>=50 && a[i][j]<=59 )
           {
                 freq3++; 
               
           }
            else if (a[i][j]>=60 && a[i][j]<=69) 
            {
                        freq4++;   
            }
           else if (a[i][j]>=70 && a[i][j]<=79) 
           {
                 freq5++;

           }
          else if (a[i][j]>=80 && a[i][j]<=89) 
          {  
            freq6++;

          }
          else if(a[i][j]>=90 && a[i][j]<=100)
            {
               
                  freq7++;
               
            }
                   
        
            
        }
         
        
          
    }
       printf("------------------------------------------------------");
        printf("20-29 \t %d", freq);   printf("\n30-39 \t %d", freq1);  printf("\n40-49 \t %d", freq2);  printf("\n50-59 \t %d", freq3); printf("\n60-69 \t %d", freq4); 
        printf("\n70-79 \t %d", freq5);  printf("\n80-89 \t %d", freq6);  printf("\n90-100 \t %d", freq7); 

       return;

}





