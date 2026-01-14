// Odd or Even. Write a program that reads an integer and determines and prints
// whether it’s odd or even. Hint: Use the remainder operator. An even number 
// is a multiple of two. Any multiple of two leaves a remainder of zero when 
// divided by 2.

#include <stdio.h>

// function main begins program execution
int main()
{
    int userInt;
    printf("Odd or Even? Enter the integer: ");
    scanf("%d", &userInt);
    if ((userInt % 2) == 0)
    {
        printf("%d is Even.\n", userInt);
    }

    if ((userInt % 2) != 0)
    {
        printf("%d is Odd.\n", userInt);
    }
} // end function main