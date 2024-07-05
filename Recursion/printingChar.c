#include<stdio.h>

void recurPrint(int i,char *c);

int main()
{
    char ch[] = "HeyMan";
    int i= 5;

    recurPrint(i,ch);
}

void recurPrint(int i,char *c)
{
    // if(i>0)
    // {
    //     printf("%s\n",c);
    //     recurPrint(--i,c):NULL;
    // // --i;
    // recurPrint(--i,c);
}