#include<stdio.h>

int main()
{
    printf("Hello\n");
    printf("%s\n%s\n%s\n%s\n",__FILE__,__TIME__,__DATE__,__LINE__);
}