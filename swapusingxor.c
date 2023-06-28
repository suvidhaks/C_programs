/*
swap two numbers without using temp and arithmetic operators 
xor is the oly logical operation which performs both addition and substraction operations ;
*/


#include <stdio.h>

int main()
{
    int a, b;
    printf("enter twovalues a and b");
    scanf("%d%d", &a, &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d, b=%d", a, b);

    return 0;
}