#include<stdio.h>




#define SET_BIT(x,pos) (x |= (1U << pos))
#define CLEAR_BIT(x,pos) (x &= (~(1U<<pos)))
#define TOGGLE_BIT(x,pos) (x ^= (1U<<pos))


int displayBit(int val)
{
    unsigned int temp = 1<<31;
    unsigned int cnt = 0;

    for(cnt=0;cnt<32;cnt++){
        (val&temp)?printf("1"):printf("0");
        temp = temp>>1;
    }
}

int main()
{
    int a = 45;
    int pos = 1;

    displayBit(a);

    SET_BIT(a,pos);
    printf("\nSetBit \n");
    displayBit(a);

    CLEAR_BIT(a,pos);
    printf("\nClearBit \n");
    displayBit(a);

    TOGGLE_BIT(a,pos);
    printf("\nToggle bit \n");
    displayBit(a);
}