#include<stdio.h>

int main()
{
    const int a = 5;
    const int b = 22;

    const int * ptr;
    ptr = &a;

    printf("A - %d\n",ptr);
    printf("A - %d\n\n",*ptr);

    // *ptr = 5 //is not allowed ad pointer to constant 
    ptr = &b;
    printf("B - %d\n",ptr);
    printf("B - %d\n\n",*ptr);
}