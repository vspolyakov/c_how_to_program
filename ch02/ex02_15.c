// State the order of evaluation of the operators in each of the following 
// C statements and show the value of x after each statement is performed.
//
// a) x = 8 + 15 * ( 6 – 2) - 1;
// b) x = 5 % 5 + 5 * 5 - 5 / 5;
// c) x = ( 5 * 7 * ( 5 + ( 7 * 5 / ( 7 ) ) ) );
#include <stdio.h>

int main()
{
    int x;
    x = 8 + 15 * (6 - 2) - 1;
    printf("x = %d\n", x);

    x = 5 % 5 + 5 * 5 - 5 / 5;
    printf("x = %d\n", x);

    x = (5 * 7 * (5 + (7 * 5 / ( 7 ))));
    printf("x = %d\n", x);
}
//