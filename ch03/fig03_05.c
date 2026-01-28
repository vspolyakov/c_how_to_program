// A class of ten students took a quiz. The grades (integers in the range 
// 0 to 100) for this quiz are available to you. Determine the class average 
// on the quiz.
#include <stdio.h>

// function main begins program execution
int main() {
    unsigned int counter;   // grades count
    int grade;              // grade value
    int total;              // grades sum
    int average;            // average grade

    // initialization variables phase
    total = 0;
    counter = 1;

    // processing phase
    while (counter <= 10) {             // repeat ten times
        printf("%s", "Enter grade: ");  // input prompt
        scanf("%d", &grade);            // read grade
        total = total + grade;          // add grade to total
        counter = counter + 1;          // increment counter
    } // end while loop

    // terminate phase
    average = total / 10;               // integer division
    printf("Class average is %d\n", average); // display result
} // end function main