#include<stdbool.h>

bool evenOdd_Airthematic(int val)
{
    //(val%2)? return true: retuurn false;  // this will be wring because in
    //in c ternnery orperator returns a value but in python ternery operator
    //returns a statement
    return !(val%2)? true: false;

    //same as
    // if(!val%2)
    // {
    //     return true;
    // }
    // return false;
    
}

bool evenOdd_BitWise(int val)
{
    int temp = 1<<31;
    // bit wise doing of oddEven

    return false;
}

bool numEqual_Airth(int *a,int *b)
{
    return (*a == *b);
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


bool numEqual_Bits(int a,int b)
{
 
    for(int i = 0; i<32;i++)
    {
        if(a^b)
        {
            continue;
        }else{
            return false;
        }
    }
    

    return true;
}









