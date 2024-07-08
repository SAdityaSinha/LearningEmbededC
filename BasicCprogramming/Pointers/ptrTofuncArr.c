#include<stdio.h>

void repetitionOfChar(char *ch,char *str,int *count)
{
    *count =0;
    char *temp = str;
    while (*temp)
    {
        if(*temp == *ch)
        {
            *count++;
        }
        temp++;
    }    
}

void SubStringInString(char *SubString,char *str, int *len)
{
    
}
int main()
{

}