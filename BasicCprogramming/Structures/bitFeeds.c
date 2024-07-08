#include<stdio.h>

struct date
{
    // int mm:4;
    short int mm;
    // int day:5;
    short int day;
    int yy;
}date;

int main()
{
    printf("Sizeof : %d\n",sizeof(date));
}