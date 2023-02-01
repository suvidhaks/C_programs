#include<stdio.h>
#define LIMIT 100
void read(char a[], int);
void escape(char [], char[]);
int main()
{
    int choice;
    char c;
    char orig[LIMIT], copy[LIMIT];
   
    //escape(orig,copy);
        printf("enter the choice");
        scanf("%d", &choice);
        
        
        switch(choice)
        {
            case 1: read(copy, LIMIT);
           
              case 2 :
                     escape(orig,copy);
                        break;

        }            
        

return 0;
}



void read(char a[], int limit)
{
   
     int i=0;
     char c;
     while(i<limit && (c=getchar())!=EOF)
     {
        a[i]=c;
        i++;
     }
     a[i]='\0';
     return ;
}


void escape(char a[LIMIT], char b[LIMIT])
{
    int i,j,flag=0, flag1=0;
    i=j=0;
    char c, c1;
    while((a[i]=b[j])!='\0')
    {
        if(a[i]=='\n')
        {
            flag++;
         // printf("%d",flag);
        }
        else if(a[i]=='\t')
        { 
             flag1++;
           // printf("%d",flag1);
        }
        i++;
        j++;
    }

        if(flag)
        {
             c='\n'+'A';
             printf("\\n in real char=%c\n", c);
        }
         if(flag1)
        {
               c1='\t' +'A';
              printf("\\t in real char=%c\n", c1);
        }
         
    
  return ;  
}