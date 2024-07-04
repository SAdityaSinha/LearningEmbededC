#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);

    int grt,sm;

    grt = (a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("Greatest : %d \n",grt);

    sm = (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("Smallest : %d\n",sm);
    
}