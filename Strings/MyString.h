#include<stdbool.h>

// #include<stdio.h>
// string len
int getLen(char *c)
{
    char *temp = c;
    // printf("%s\n",c);
    // printf("%c\t%d\n",*temp,*temp);
    int count = 0;
    while (*temp)
    {
        
        // printf("%c\n",*temp);
        ++temp;
        count++;
    }
    return count;
}


// string compare
bool strComp(char *s1,char *s2)
{
    if(getLen(s1)!=getLen(s2))
    {
        return false;
    }else
    {
        char *t1 = s1;
        char *t2 = s2;

        while (*t1)
        {
            if(*t1 != *t2)
            {
                return false;
            }
            t1++;
            t2++;
        }
        return true;
    }
}

// // String Swap
void strSwap(char *s1,char *s2)
{
    char temp;

//tb to ismw size of wla jada val dega because of managing exras by '\0'
    while (*s1&&*s2)
    {
        temp = *s1;
        *s1 = *s2;
        *s2 = temp;

        s1++;
        s2++;
    }

    while (*s1)
    {
        *s2 = *s1;
        // *s1 = 'X';
        *s1 = '\0';

        s1++;
        s2++;

    }

    while (*s2)
    {
        *s1 = *s2;
        // *s2 = 'Z';
        *s2 = '\0';

        s1++;
        s2++;
    }
    
    // *s1 = '\0';
    // *s2 = '\0';
    
    
}

// strign reverse
void strRevConv(char *toRev)
{
    int len = getLen(toRev);
    char temp;
    for(int i=0;i<len/2;i++)
    {
        temp = toRev[i];
        toRev[i] = toRev[len-i-1];
        toRev[len-i-1] = temp;
    }
}


//
void charLower(char *s)
{
    // *s =
}


// string lower
void strToLower(char *s)
{
    while (*s)
    {
        // *s = 
    }
    
}
// string concatination
// string upper
// string toggelUperLower
