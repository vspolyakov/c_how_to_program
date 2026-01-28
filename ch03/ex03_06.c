// Write a C program that uses the statements in Exercise 3.6 to calculate x 
// raised to the y power. The program should have a while iteration control 
// statement.

#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int x;
    unsigned int y;
    unsigned int power = 1;
    unsigned int i = 1;

    printf("Input unsigned integer x: ");
    scanf("%u", &x);

    printf("Input unsigned integer y: ");
    scanf("%u", &y);

    while (i <= y) {
        power = power * x;
        ++i;
    } // end while
    printf("x ^ y = %u\n", power);
} // end function main()