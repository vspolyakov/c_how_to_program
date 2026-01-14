// Multiples. Write a program that reads in two integers and determines and 
// prints whether the first is a multiple of the second. 
// Hint: Use the remainder operator.

#include <stdio.h>

// function main begins program execution
int main()
{
    int a, b;
    printf("Multiples. Enter first and second integers: ");
    scanf("%d%d", &a, &b);

    if ((a % b) == 0)
    {
        printf("%d is a multiple of %d\n", a, b);
    }
    if ((a % b) != 0)
    {
        printf("%d is not multiple of %d\n", a, b);
    }
} // end function main