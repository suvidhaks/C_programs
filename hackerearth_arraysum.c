/* this code is based on the configuration and specification of dell i5

sample input : 1<=n<=10;
n=5
0<=a[i]<=10^10;
1000000001  1000000002  1000000003  1000000004  1000000005
num=5;
expected o/p
5000000015    */


#include <stdio.h>
#include<math.h>
//unsigned long int power(unsigned short int, unsigned short int);





int main(){
	int num;
	unsigned long long int a[10];
	unsigned long long int sum=0;
	int i;
	scanf("%d", &num);              	                  // Reading 
//	printf("Input number is %d\n", num);
   // prod=power(10,10);
    for(i=0;i<num;i++)
	{
      scanf("%lld", &a[i]);
	}
	 for(i=0;i<num;i++)
	{ 
		if(0<=a[i]<=pow(10,10));
              sum+=a[i];
	}
	printf("\n%lld",sum);
	return 0;
}


/*unsigned long int power(unsigned short int base, unsigned short int exp)
{
	unsigned long int prod=1;
	int i;
	for(i=0;i<exp;i++)
	{
      prod=base*prod;
	}
	return prod;
}*/





