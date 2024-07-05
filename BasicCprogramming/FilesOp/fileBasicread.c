#include<stdio.h>

int main(int argC,char *argV[])
{

    FILE *fp,*fp2;
    char c;
    char temp ='a';

    int tabCount=0,newLineCoount=0,wordCount=0;

    fp = fopen(argV[1],"r");
    fp2 = fopen(argV[2],"w");

    while ((c = fgetc(fp))!=EOF)
    {
        // putchar(c);
        fputc(c,fp2);
        
        //for words
        wordCount += (((c!=' ')&&(temp==' '||temp=='\n')))?1:0;
        temp = c;

        tabCount += (c=='\t')?1:0;

        newLineCoount += (c=='\n')?1:0;
        
    }
    fclose(fp);
    fclose(fp2);
    printf("\nLines : %d\nTotal Words : %d\nTabs : %d\n",newLineCoount+1,wordCount,tabCount);
    
}