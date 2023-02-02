#include <stdio.h>
#include <string.h>

int main()
{
    
    int i, j;
    char c;
    char a[]="suvidha";
    for(i=0,j=(strlen(a)-1);i<j;i++,j--)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    
    printf("%s", a);
    
    return 0;
}
