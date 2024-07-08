#include"DateCal.h"

int yrMnthRemainingDays[] = {3,0,3,2,3,2,3,3,2,3,2,3};


 void PrintDayByIndex(int i)
 {
    switch (i)
    {
    case 0:
        printf("SUNDAY\n");
        // *day = "SUNDAY\0";
        break;

    case 1:
        printf("MONDAY\n");
        // *day = "MONDAY";
        break;

    case 2:
        printf("TUESDAY\n");
        // *day = "TUESDAY";
        break;

    case 3:
        printf("WEDNESDAY\n");
        // *day = "WEDNESDAY";
        break;
    
    case 4:
         printf("THURSDAY\n");
        // *day = "THURSDAY";
        break;

    case 5:
        printf("FRIDAY\n");
        // *day = "FRIDAY";
        break;

    case 6:
        printf("SATURDAY\n");
        // *day = "SATURDAY";
        break;

    default:
        break;
    }
 }

int getYearsExtraDays(int year)
{
    int extraDays = 0;

    year = year%400;
    while (year>100)
    {
        extraDays+=5;
        year = year%100;
    }

    for(int i=1;i<=year;i++)
    {
        extraDays += (checkLeapYear(i))?2:1;
    }

    extraDays = extraDays%7;
    
}

int getMonthsExtraDays(int months,int year)
{
    int TotalExtraDays = 0;
    int MonthExtraDays;
    for(int i=0;i<months;i++)
    {
        MonthExtraDays = yrMnthRemainingDays[i];

        if(months==1&&checkLeapYear(year)){
            MonthExtraDays++;
        }
        TotalExtraDays += MonthExtraDays;
    }
    return TotalExtraDays%7;
}

int GetDay(MyDateSystem CurrntDate)
{
    int yearsExtraDays = getYearsExtraDays(CurrntDate.year -1);
    int monthExtraDays = getMonthsExtraDays(CurrntDate.month -1,CurrntDate.year);

    int daysExtraDays = CurrntDate.day;
    daysExtraDays %= 7;

    int TotalExtraDays = yearsExtraDays+monthExtraDays+daysExtraDays;
    TotalExtraDays %= 7;

    return TotalExtraDays;
}



