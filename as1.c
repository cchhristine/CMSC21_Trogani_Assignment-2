#include <stdio.h>
int main()
// assign each digit as d1 and d2//
//to easily reverse each digit//
{ int d1, d2;
//get input from the user//
printf("Enter a two-digit number:");
scanf("%1d%1d", &d1, &d2 );
printf("Reverse: %d%d \n", d2, d1);

//another way on how to reverse a number//
printf ("Another Way \n");
int digits, reversed = 0;
    // Input a number from user
    printf("Enter a two digit number = ");
    scanf("%d", &digits);
    //Repeat the till number becomes 0
    while(digits != 0)
    {
        /*
         * Increase place value of reversed and
         * add last digit to reversed
         */
        reversed = (reversed * 10) + (digits % 10);
        // Remove last digit from number
        digits/= 10;
    }
    printf("Reverse = %d", reversed);
    return 0;
    }