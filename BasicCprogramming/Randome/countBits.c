#include<stdio.h>

int countBits(int val)
{
    unsigned int temp = 1<<31;
    unsigned int cnt =0;

    for(int i=0;i<32;i++)
    {
        cnt += (val&temp)?1:0;
        temp = temp>>1;
    }
    return cnt;
}

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
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    displayBit(i);
    printf("\n");
    int count = countBits(i);
    printf("No of 1's : %d \n",count);
}