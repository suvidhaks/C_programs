#include<stdio.h>
extern void display();
extern void displaymax();
int max;
int main()
{
    display();
    printf("\nvalue of max=%d",max);
    ++max;
    printf("\nvalue1 of max=%d",max);
    displaymax();
     printf("\nvalue1 of max=%d",max);
    return 0;

}