#include<stdio.h>

void changeVal(int *val,int *v2);

int main()
{
    int i = 245454545;
    int b = 31;

    changeVal(&i,&b);
    printf("%d",i);

}

void changeVal(int *val,int *v2)
{
    *val = *v2;
}