#include<stdio.h>

int displayBit(int val)
{
    unsigned int temp = 1<<31;
    unsigned int cnt = 0;

    for(cnt=0;cnt<32;cnt++){
        (val&temp)?printf("1"):printf("0");
        temp = temp>>1;
    }
}

int setBit(int val,int pos)
{
    int res = 0;
    val = val|(1<<pos);
    return val;
}

int ResetBit(int val, int pos)
{

}

int toggleBit(int val,int pos)
{

}


void bin(int n)
{
    int i;
    printf("0");
    for (i = 1 << 31; i > 0; i = i / 2) {
        if ((n & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}

int readBit(int val, int pos)
{
    int temp = 0;
    temp = (val&(1<<pos))?1:0;
    return temp;
}


int main()
{
    int i;
    int pos;

    // printf("Enter value and position : ");
    // scanf("%d,%d",&i,&pos);

    i = 37;
    pos = 3;

    setBit(i,pos);
    int res = setBit(i,pos);
    displayBit(res);


}