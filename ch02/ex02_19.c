// Write a program that inputs three different integers from the keyboard, 
// then prints the sum, the average, the product, the smallest and the largest
// of these numbers. Use only the single-selection form of the if statement you 
// learned in this chapter. The screen dialogue should appear as follows:
//
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main()
{
    int a, b, c, min, max;
    printf("Enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Sum is %d\n", a + b +c);
    printf("Average is %d\n", (a + b + c) / 3);
    printf("Product is %d\n", a * b *c);

    min = a;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    printf("Smallest is %d\n", min);

    max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    printf("Largest is %d\n", max);
}