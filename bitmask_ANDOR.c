#include <stdio.h>
#define SETBIT 0177700
int main()
{
  int a=0,c,d,e,f,unary,u=5;
  c=a&SETBIT;
  d=a|SETBIT;
  e=8>>1;
   f=8<<1;
   unary=~u;
  printf("%d\t%d", c,d);
  printf("\n%d\t %d", e, f);
  printf("\n2'scompliment unsigned no.=%d", unary);
  return 0;
}
