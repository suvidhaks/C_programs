/* in reverse function two operations are performed in one loop
the mid point acts as a root and the j index acts as left tree 
i index acts as right tree,so the j index value should always be less than i index
in case of odd number of elements the j index coincides with i index , when the number of elements are odd
the number of elements in the left of the mid point is equal to the no. of elements in the right.
therfore the mid element need not to be swapped.
in reverse()
the loop runs for (n/2) times.
*/


#include <stdio.h>
#include<string.h>
#define limit 100

void itoa(int num, char s[limit]);
void reverse(char s[limit]);

int main()
{
    char s[limit];
    int num;
    printf("enter a number");
    scanf("%d", &num);
    itoa(num,s);
     
    printf("%s", s);
    return 0;
}

void itoa(int n, char s[limit])
{
    int sign,i=0;
    if((sign=n)<0)
    {
        n=-n;
    }
    do
    {
        s[i++]=n%10+'0';
       
    }while((n=n/10)>0);
    if(sign<0)
    {
        s[i++]='-';
    }
    s[i]='\0';
    reverse(s);
   
    return;
}


void reverse(char s[limit])
{
    int i,j=0;
    char c;
    for(i=strlen(s)-1;i>j;i--)
    {
       c=s[i];
        s[i]=s[j]; 
        s[j]=c;
       j++;

    }
 
    return;
    
}