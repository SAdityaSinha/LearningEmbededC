#include<stdio.h>
#include<stdbool.h>

#include"MyCalculations.h"

int main()
{
    int i = 212;
    int i2 = 212;

    numEqual_Airth(&i,&i2)?printf("isEqual"):printf("NotEqual");
    printf("\n");
    numEqual_Bits(i,i2)?printf("isEqual"):printf("NotEqual");
}
