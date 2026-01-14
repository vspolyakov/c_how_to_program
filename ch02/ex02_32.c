// Body Mass Index Calculator. We introduced the body mass index (BMI) 
// calculator Exercise 1.12. The formulas for calculating BMI are
//
//               weight in pounds X 703
//   BMI = -------------------------------------
//          height in inches X height in inches
//
// or
//                weight in kilograms
//   BMI = ---------------------------------------
//          height in meteres X height in meteres
//
// Create a BMI calculator application that reads the user’s weight in pounds 
// and height in inches (or, if you prefer, the user’s weight in kilograms and 
// height in meters), then calculates and displays the user’s body mass index. 
// Also, the application should display the following information from the 
// Department of Health and Human Services/National Institutes of Health so the 
// user can evaluate his/her BMI:
//
// BMI VALUES
// Underweight: less than 18.5
// Normal: between 18.5 and 24.9
// Overweight: between 25 and 29.9
// Obese: 30 or greater
//
// Note: In this chapter, you learned to use the int type to represent whole 
// numbers. The BMI calculations when done with int values will both produce 
// whole-number results. In Chapter 4 you’ll learn to use the double type to 
// represent numbers with decimal points. When the BMI calculations are 
// performed with doubles, they’ll both produce numbers with decimal 
// points—these are called “floating-point” numbers.

#include <stdio.h>

// function main begins program execution
int main()
{
    double weight, height;
    printf("Body Mass Index Calculator (BMI).\n");

    printf("Input weight in kilograms: ");
    scanf("%lf", &weight);

    printf("Input height in meteres: ");
    scanf("%lf", &height);

    printf("Your BMI is %f\n", weight / (height * height));
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");
} // end function main