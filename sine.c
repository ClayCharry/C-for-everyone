/* 
Program that calculates the sine of a number
between 0 and 1 (Non inclusive).
Author: Clay Felipe Charry Pinzón.
Date: 18/11/2022.
*/

#include <stdio.h>

int main(void)
{
    double sine, number;

    printf("Enter the number you wish to get the sine of: ");
    scanf("%lf", &number);

    sine = (number * (1/2) * (1/2)) / 2;

    printf("The sine of the number %lf is: %lf", number, sine);

    return 0;
}