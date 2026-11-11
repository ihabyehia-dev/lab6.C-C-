/***************************************************************** 

    File: lab4.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab4.c lab4main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
This function is passed a base and an exponent.  It should return base^exponent.
*/
int power(int base, int exponent);

/*
This function returns a user entered number that will be within 
the inclusive valid range represented by the two numbers passed 
(min and max).
*/
int readIntInRange(int min, int max);


/*
This function is passed a number `n` and returns the nth value in the fibonacci sequence.
*/
int fibonacci(int n);


