// A college offers a course that prepares students for the state licensing 
// exam for realestate brokers. Last year, 10 of the students who completed 
// this course took the licensing examination. Naturally, the college wants 
// to know how well its students did on the exam. You’ve been asked to write 
// a program to summarize the results. You’ve been given a list of these 
// 10 students. Next to each name a 1 is written if the student passed the exam 
// or a 2 if the student failed.
// Your program should analyze the results of the exam as follows:
// 1. Input each test result (i.e., a 1 or a 2). Display the prompting message 
// “Enter result” each time the program requests another test result.
// 2. Count the number of test results of each type.
// 3. Display a summary of the test results indicating the number of students 
// who passed and the number who failed.
// 4. If more than eight students passed the exam, print the message 
// “Bonus to instructor!”

#include <stdio.h>

// function main begins program execution
int main(void)
{
    // initialize variables in definitions
    unsigned int passes = 0;    // number of passes
    unsigned int failuers = 0;  // number of failures
    unsigned int student = 1;   // student counter
    int result;                 // one exam result

    // process 10 students using counter-controlled loop
    while (student <= 10)
    {
        // prompt user for input and obtain value from user
        printf("User %d, enter result (1-pass, 2-fail): ", student);
        scanf("%d", &result);

        if (result == 1) {
            // if result 1, increment passes
            passes = passes + 1;
        } // end if
        else {
            // otherwise, increment failures
            failuers = failuers + 1;
        } // end else

        student = student + 1; // increment counter
    } // end while

    // termination phase; display number of passes and failures
    printf("Passed: %u\n", passes);
    printf("Failed: %u\n", failuers);

    // if more than eight students passed, print "Bonus to instructor!"
    if (passes >= 8)
    {
        printf("Bonus to instructor!\n");
    } // end if
    
} // end function main()