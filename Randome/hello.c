#include<stdio.h>

int main()
{
    char name[10];
    int age;
    int percentage;

    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your percentage here : ");
    scanf("%d",&percentage);
    printf("Enter your age : ");
    scanf("%d",&age);


    printf("\n\nName : %s\nAge : %d\nPercentage : %d",name,age,percentage);
}