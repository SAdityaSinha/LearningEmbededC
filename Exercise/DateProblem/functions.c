#include"DateCal.h"

int yrMnthTotalDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};


 void FuncIsLeapYr(MyDateSystem *date)
 {
    int yr = date->year;
    if((yr%4==0 && yr%100!=0)||(yr%400==0))
    {
        date->isLeapYr = true;
        return;
    }
    date->isLeapYr = false;
 }

bool checkLeapYear(int yr)
{
    if((yr%4==0 && yr%100!=0)||(yr%400==0))
    {
        return true;
    }
    return false;
 }

 int yearLeftOver(unsigned const int *yr)
 {
    int tempYr = *yr;
    int yrDig = NoOfDigInNum(tempYr);



 }

 int NoOfDigInNum(int num)
 {
    int digits =1;
    while (num>9)
    {
        digits++;
        num = num/10;
    }
    return digits;
 }

void incDecNormalMonthNormalDay(MyDateSystem *OutputDate,MyDateSystem *InputDate,char indicator)
{
    switch (indicator)
    {
    case '+':
        OutputDate->day = InputDate->day+1;
        break;
    case '-':
        OutputDate->day = InputDate->day-1;
        break;
    }
    OutputDate->month = InputDate->month;
    OutputDate->year = InputDate->year;
    OutputDate->isLeapYr = InputDate->isLeapYr;
}

void incDecNormalMonthDoughtDay(MyDateSystem *OutputDate,MyDateSystem *InputDate,char indicator)
{
    int TotalDaysInMotnh = yrMnthTotalDays[InputDate->month-1];
    switch(indicator)
    {
        case '+':
            if(InputDate->day==30 && TotalDaysInMotnh==31)
            {
                incDecNormalMonthNormalDay(OutputDate,InputDate,'+');
            }else
            {
                OutputDate->day = 1;
                OutputDate->month = InputDate->month+1;
            }
            break;
        case '-':
            if(InputDate->day==1)
            {
                //previousMonght Totaldays
                int daysInLastMonth= (InputDate->month==1)?31:yrMnthTotalDays[InputDate->month-1-1];

                OutputDate->day = daysInLastMonth;
                OutputDate->month = InputDate->month-1;
                OutputDate->year = InputDate->year;
                OutputDate->isLeapYr = InputDate->isLeapYr;
            }else
            {
                OutputDate->day = InputDate->day-1;
                OutputDate->month = InputDate->month;
                OutputDate->year = InputDate->year;
                OutputDate->isLeapYr = InputDate->isLeapYr;
            }
            break;
    }
    OutputDate->year = InputDate->year;
    OutputDate->isLeapYr = InputDate->isLeapYr;


}

void incrementDoughtMonth(MyDateSystem *OutputDate,MyDateSystem *InputDate)
{
    if(InputDate->month==2)
    {
        FuncIsLeapYr(InputDate);
        if((InputDate->isLeapYr&&InputDate->day==29)||((!InputDate->isLeapYr)&&InputDate->day==28))
        {
            OutputDate->day = 1;
            OutputDate->month = InputDate->month+1;
            OutputDate->year= InputDate->year;
            OutputDate->isLeapYr = true;
        }else
        {
            //treating it as a normal month and normal day
            incDecNormalMonthNormalDay(OutputDate,InputDate,'+');
        }
    }else if (InputDate->month==12)
    {
        if(InputDate->day==31)
        {
            OutputDate->day = 1;
            OutputDate->month = InputDate->month=1;
            OutputDate->year= InputDate->year+1;
            FuncIsLeapYr(OutputDate); 
        }else
        {
            incDecNormalMonthNormalDay(OutputDate,InputDate,'+');
        }
    }
    
}


void decrementDoughtMonth(MyDateSystem *OutputDate,MyDateSystem *InputDate)
{
    if(InputDate->month==3)
    {
        // FuncIsLeapYr(InputDate); //not needed as handelled it at initialization
        if((InputDate->day==1))
        {
            if(InputDate->isLeapYr)
            {
                OutputDate->day = 29;
            }else{
                OutputDate->day = 28;
            }
            
            OutputDate->month = InputDate->month-1;
            OutputDate->year= InputDate->year;
            OutputDate->isLeapYr = true;
        }else
        {
            incDecNormalMonthNormalDay(OutputDate,InputDate,'-');
            
        }
    }else if (InputDate->month==1)
    {
        if(InputDate->day==1)
        {
            OutputDate->day = 31;
            OutputDate->month = InputDate->month=12;
            OutputDate->year= InputDate->year-1;
            FuncIsLeapYr(OutputDate); 
        }else
        {
            incDecNormalMonthNormalDay(OutputDate,InputDate,'-');
        }
    }


}


void GetNextDay(MyDateSystem *InputDate,MyDateSystem *OutputDate)
{
    if((InputDate->month)!=2&&InputDate->month!=12)
    {
        incDecNormalMonthNormalDay(OutputDate,InputDate,'+');
    }else
    {
        incrementDoughtMonth(OutputDate,InputDate);
    }
    
}


void GetPreviousDay(MyDateSystem *InputDate,MyDateSystem *OutputDate)
{
    if((InputDate->month)!=1&&InputDate->month!=3)
    {
        incDecNormalMonthDoughtDay(OutputDate,InputDate,'-');  
    }else
    {
        decrementDoughtMonth(OutputDate,InputDate);
    }
    
}


MyDateSystem AllotNextDay(MyDateSystem *CurrentDate)
{
    MyDateSystem NextDate;
    GetNextDay(CurrentDate,&NextDate);
    return NextDate;
}

MyDateSystem AllotPreviousDay(MyDateSystem *CurrentDate)
{
    MyDateSystem PreviousDay;
    GetPreviousDay(CurrentDate,&PreviousDay);
    return PreviousDay;
}

bool isDateInputCorrect(int day,int month,int year)
{
    if(month>0&&month<13)
    {
        int TotalDaysPossible = yrMnthTotalDays[month-1];
        if(month==2)
        {
            bool isLeapYear = checkLeapYear(year);
            TotalDaysPossible += (isLeapYear)?1:0;
        }
        if(day>0 && day <= TotalDaysPossible)
        {
            return true;
        }
        return false;
    }else
    {
        return false;
    }
}



int scanDate(MyDateSystem *UserInputDate)
{
    // scanf("%d %d %d\n",&UserInputDate->day, &UserInputDate->month, &UserInputDate->year);
    int day,month,year;
    scanf("%d %d %d",&day,&month,&year);
    if(isDateInputCorrect(day,month,year))
    {
        UserInputDate->day = day;
        UserInputDate->month = month;
        UserInputDate->year = year;
        FuncIsLeapYr(UserInputDate);
        return 1;
    }else
    {
        printf("\n-----------------------------");
        printf("\nERROR: enter data correctly\n");
        printf("-----------------------------\n");
        return 0;
    }   

}

void printDate(MyDateSystem *OutputToUser)
{
        // printf("Date : ");
        printf("\t--------------\n");
        printf("Date :\t%d | %d | %d\n",OutputToUser->day, OutputToUser->month, OutputToUser->year);
        printf("\t---------------\n");
        printf("-------\n");
        (OutputToUser->isLeapYr)?printf("Leap year\n"):printf("Not Leap\n");
        printf("-------\n");
        PrintDayByIndex(GetDay(*OutputToUser));
        printf("-------\n");
        // int dayIndex = GetDay(*OutputToUser);

}











