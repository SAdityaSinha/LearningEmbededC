#include<stdio.h>
#include<stdbool.h>

typedef struct MyDateSystem
{
    //calculating max bits required with calC and then assigning only that
    //many bits as 
    // unsigned int day:4;
    // unsigned int month:5;
    unsigned short int day;
    unsigned short int month;
    unsigned int year;
    bool isLeapYr;
    // char day[10];
}MyDateSystem;


//both the arrys are for a non leap year
// int yrTotalDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
// int yrRemainingDays[] = {3,0,3,2,3,2,3,3,2,3,2,3};
//for leap year increasing the val or array[2-1] + 1
//in both the arrays;

void PrintDayByIndex(int i);

int GetDay(MyDateSystem CurrntDate);

//one less as the particular year or month is not completed
int getYearsExtraDays(int year); // send years by one less
int getMonthsExtraDays(int months,int year); //one less but send the current year

////////////

void FuncIsLeapYr(MyDateSystem *date);

bool checkLeapYear(int year);
//this is specially for checking at the time of input

int yearLeftOver(unsigned const int *yr);

int NoOfDigInNum(int num);

// void printNextDay(unsigned const short int *day, unsigned const short int *month, unsigned const int *year);
void GetNextDay(MyDateSystem *InputDate,MyDateSystem *OutputDate);

void GetPreviousDay(MyDateSystem *InputDate,MyDateSystem *OutputDate);

MyDateSystem AllotNextDay(MyDateSystem *CurrentDate);

MyDateSystem AllotPreviousDay(MyDateSystem *CurrentDate);


int scanDate(MyDateSystem *UserInputDate);

bool isDateInputCorrect(int day,int month,int year);

void printDate(MyDateSystem *OutputToUser);

void incDecNormalMonthNormalDay(MyDateSystem *OutputDate,MyDateSystem *InputDate,char indicator);

void incDecNormalMonthDoughtDay(MyDateSystem *OutputDate,MyDateSystem *InputDate,char indicator);

void incrementDoughtMonth(MyDateSystem *OutputDate,MyDateSystem *InputDate);

void decrementDoughtMonth(MyDateSystem *OutputDate,MyDateSystem *InputDate);

//yet to declare
// bool CheckValidDateInput(MyDateSystem *InputDate);
