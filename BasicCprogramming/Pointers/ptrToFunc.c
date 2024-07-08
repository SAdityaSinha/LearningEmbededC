#include<stdio.h>

int add(int i,int j)
{
    return i+j;
}

int repetitionOfChar(char ch,char *str)
{
    int count = 0;
    char *temp = str;
    while (*temp)
    {
        if(*temp == ch)
        {
            count++;
        }
        temp++;
    }
    return count;
    
}

int main()
{
    int (*fadd)(int,int);

    fadd = add;
    printf("Fadd gives %d\n",fadd(6,7));

    int (*charCounter)(char,char *);


    charCounter = repetitionOfChar;

    char ch = 'a';
    char st[] = "abaacdhsskjskfa";
    printf("Char in String : %d times\n",charCounter(ch,st));
}