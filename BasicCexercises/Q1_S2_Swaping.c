#include<stdio.h>

void Swap_WithVar(int *a,int *b);
void Swap_WithoutVar(int *a,int *b);

int main()
{
    int a,b;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    Swap_WithVar(&a,&b);
    printf("\na : %d\nb : %d\n",a,b);

    Swap_WithoutVar(&a,&b);
    printf("\na : %d\nb : %d\n",a,b);

}

void Swap_WithVar(int *a,int *b)
{
    int temp;
    temp = *a;

    *a = *b;
    *b = temp;
}

void Swap_WithoutVar(int *a,int *b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}