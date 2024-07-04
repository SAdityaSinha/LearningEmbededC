#include<stdio.h>

int main()
{
    int i =0;
    while (1)
    {
        i++;
        if(i==5 || i==7 ||i==10){
            if(i==10){
                printf("%d\n",i);
                break;
            }
            continue;
        }else{
        printf("%d\n",i);
        }
    }
    
}