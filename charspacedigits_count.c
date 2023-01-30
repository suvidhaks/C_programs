/*using switch one can perform multiple decison making operations
break is used to come out of a paricular.
In this progrm the digits [0-9] are taken as case, if the char c matches 
the digit of any case then it just traverses through all cases written as digit 
and then at last in case 9 there is a computation for digit[c-'0']++ and then terminated by break;
it means that instead of placing digit[c-'0']++ in every case it is placed at last,  since there  is no break at each case all the 
preceeding cases will be executed  and then at last in case 9 the expression is computed
note: unary operators like ++/-- can be used in arrays as well
e.g: digit['1'-'0]++ will be
ascii of '1'=49
ascii of '0'=48 ;  49-48=1;
initially digit[10] is initialized to zeros;
digit[1]++ is  evaluated as 
digit[1]=0 and then add 1 to it;
0++ which is 1
*/


#include <stdio.h>

int main()
{
    int digit[10],nspace=0,others=0;
    char c;
    int i;
    for(i=0;i<10;i++)
     {
         digit[i]=0;
     }
        while((c=getchar())!=EOF)
        {
            switch(c)
            {
            case '0':
            case '1':   case '2':   case '3':   case '4':  case '5':
              case '6':   case '7':   case '8':   case '9':
                       digit[c-'0']++;
              break;
              case ' ':
              case '\t':
              case  '\n':
                           nspace++;
            break;
            default : others++;
                      break;             
            }
            
        }

     for(i=0;i<10;i++)
     {
         printf("%d ", digit[i]);
     }
     
     printf("\n%d", nspace);
     printf("\n%d", others);
    return 0;
  
}