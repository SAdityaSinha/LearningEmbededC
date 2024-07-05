#include<stdio.h>

int amin()
{
    int a = 10;
    int b = 20;

    int *const ptr = &a;


    printf("5d\n",*ptr);

    // ptr++;
    printf("%d\n",*ptr);
}