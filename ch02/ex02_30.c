// Separating Digits in an Integer. Write a program that inputs one five-digit 
// number, separates the number into its individual digits and prints the digits
// separated from one another by three spaces each. Hint: Use combinations of 
// integer division and the remainder operation.
// For example, if the user types in 42139, the program should print
// 4   2   1   3   9
#include <stdio.h>

// function main begins program execution
int main()
{
    int userInt;
    printf("Separating Digits in an Integer.\n");
    printf("Input one five-digit number: ");
    scanf("%d", &userInt);

    printf("%d   ", userInt / 10000);

    userInt = userInt % 10000;
    printf("%d   ", userInt / 1000);

    userInt = userInt % 1000;
    printf("%d   ", userInt / 100);

    userInt = userInt % 100;
    printf("%d   ", userInt / 10);

    userInt = userInt % 10;
    printf("%d.", userInt);
} // end function main