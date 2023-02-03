#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
   char c;
   char a[MAX];
   int i=0;
   int j;
   while((c=getchar())!=EOF)
   {
       a[i]=c;
       i++;
   }
for(j=strlen(a)-1;j>=0;j--)
{
    if(a[j]==' ' || a[j]=='\t' || a[j]=='\n')
       break;
}
a[j+1]='\0';
printf("%d", j);

    return 0;
}
