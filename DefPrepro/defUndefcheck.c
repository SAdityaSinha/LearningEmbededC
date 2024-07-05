#include<stdio.h>

//defining a maxro for a speific condition 
// #define BOARD1
#define BOARD2

void boardPrinter();

int main()
{
    printf("Starting program .. \n");

    // boardPrinter();
    #ifdef BOARD1
        printf("Using board1 \n");
    #endif
    
    #ifdef BOARD2
        printf("Using board2 \n");
    #endif
    
    // #undef BOARD2
    #define BOARD1

    // boardPrinter();
    #ifdef BOARD1
        printf("Using board1 \n");
    #endif
    
    #ifdef BOARD2
        printf("Using board2 \n");
    #endif


}

void boardPrinter()
{
    #ifdef BOARD1
        printf("Using board1 \n");
    #endif
    
    #ifdef BOARD2
        printf("Using board2 \n");
    #endif
}