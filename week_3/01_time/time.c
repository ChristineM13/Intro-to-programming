/*
    This program converts given number of seconds to HMS

    65 seconds -> 0 hours -> 1 minute -> 5 seconds

*/

#include <stdio.h>

int main () {
    int seconds = 1;
    int minutes = 0;
    int remaining_seconds = 0;


    // Gets number of seconds
    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    //calculate number of minutes
    minutes = seconds / 60;

    remaining_seconds = seconds % 60;

    printf("%d seconds is %d minutes\n", seconds, minutes);

    return 0;
}

// do by thursday calculate number of hours