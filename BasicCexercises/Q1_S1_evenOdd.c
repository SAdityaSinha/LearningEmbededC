#include<stdio.h>

#include"MyCalculations.h"

// #define printingBOOL(bl) ((bl)?"true" : "false")
int main()
{
    int integer;
    printf("Enter a value : ");
    scanf("%d",&integer);

    printf("AirthematicOddEven : %c\n",((evenOdd_Airthematic(integer))?'E':'O'));
    // printf("AirthematicOddEven : %s\n",printingBOOL(evenOdd_Airthematic(integer)));
    printf("BitWiseOddEven : %c\n",(evenOdd_BitWise(integer)?'E':'O'));
}