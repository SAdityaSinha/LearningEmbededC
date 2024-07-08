#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}

int main()
{
    int (*calC[4])(int,int);

    int i=0;
    calC[0] =add;
    calC[1]=sub;
    calC[2]=mul;
    calC[3]=div;

    for (int i = 0; i < 4; i++)
    {
        printf("= %d\n",calC[i](8,3));
    
    }
    
}
