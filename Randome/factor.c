#include<stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    int temp =1;
    int iHalf = i/2;


    printf("%d * %d\n",1,i);
    while (iHalf>0)
    {
        temp = iHalf/2;
        while (temp>0)
        {            
            if(temp*iHalf==i)
            {
                printf("%d * %d \n",temp,iHalf);
                break;
            }
            temp--;
        }
        iHalf--;
        
    }
    
}