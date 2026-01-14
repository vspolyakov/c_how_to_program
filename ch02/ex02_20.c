// Converting from seconds to hours, minutes and seconds.
// Write a program that asks the user to enter the total time elapsed, 
// in seconds, since an event and converts the time to hours,
// minutes and seconds. The time should be displayed as hours:minutes:seconds.
// Hint: Use the remainder operator.

#include <stdio.h>

// function main begins program execution
int main()
{
    int userInputSeconds;
    int seconds, minutes, hours;

    printf("Enter the total time elapsed (in seconds): ");
    scanf("%d", &userInputSeconds);

    hours = userInputSeconds / 3600;
    minutes = userInputSeconds % 3600 / 60;
    seconds = userInputSeconds % 3600 % 60;

    printf("Convert (hh:mm:ss): %d:%d:%d\n", hours, minutes, seconds);
} // end function main