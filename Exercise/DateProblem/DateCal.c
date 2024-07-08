// #include<stdio.h>

#include"DateCal.h"
// enum day{Sunday=0,Monday=1,Tuesday=2,Wednesday=3,Thursday=5,Friday=5,Saturday=6};
int main()
{
    unsigned short int i;
    MyDateSystem OriginalDate;
    int isReady;
    // MyDateSystem NextDate;
    // MyDateSystem PreviousDate;

    i = 0;
    while (i!=4)
    {
        printf("\n1. To Initialilze\n2. To Next Date\n3. To previious Date\n4. To Exit\nEnter Your Choise :: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            //to get data from user
            printf("Enter Date in format of DD MM YYYY : ");
            isReady = scanDate(&OriginalDate);
            if(isReady==1)
            {
                printf("\n");
                printDate(&OriginalDate);
            }
            printf("%d",isReady);
            break;
        
        case 2:
            //to get the next date
            printf("%d",isReady);
            if(isReady==1)
            {    
                // NextDate = AllotNextDay(&OriginalDate);
                OriginalDate = AllotNextDay(&OriginalDate);
                printf("\nNext Date : \n");
                // printDate(&NextDate);
                printDate(&OriginalDate);
            }else
            {
                printf("\n--------------------");
                printf("\n  Initialize First\n");
                printf("--------------------\n");
            }
            break;
        case 3:
            if(isReady==1)
            {    
                // PreviousDate = AllotPreviousDay(&OriginalDate);
                OriginalDate = AllotNextDay(&OriginalDate);
                printf("\nPrevious Date : \n");
                // printDate(&PreviousDate);
                printDate(&OriginalDate);
            }else
            {
                printf("\n--------------------");
                printf("\n  Initialize First\n");
                printf("--------------------\n");
            }
            break;
        case 4:
            printf("\n--------------------");
            printf("\n  Quitting.... .. .\n");
            printf("--------------------\n");
            break;
        default:
        printf("\n--------------------");
            printf("\nEnter a valid value\n");
            printf("--------------------\n");
            break;
        }
    }
    

}