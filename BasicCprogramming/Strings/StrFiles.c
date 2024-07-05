#include<stdio.h>

#include "MyString.h"

int main()
{
    char str[]="YoManUKnowItAllYa";
    char str2[] ="Hello";
    printf("%d\n",getLen(str));
    printf("%c\n",(strComp(str,str2))?'Y':'N');

    printf("%s\n",str2);
    strSwap(str,str2);
    printf("%s\n%s\n",str2,str);

    // strRevConv(str);
    // printf("%s\n",str);

    
}
 