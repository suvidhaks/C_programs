#include <stdio.h>
#define SETBIT 0177
int main()
{
  int a=0,c,d;
  c=a&SETBIT;
  d=a|SETBIT;
  printf("c=%d\td=%d", c,d);
  return 0;
}
