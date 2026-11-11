/***************************************************************** 

    File: lab4main.c

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

int power(int base, int exponent);
int readIntInRange(int min, int max);
int fibonacci(int n);

int main(void)
{
	//examples of setting up a test of your functions...
	//work out what the correct value is and see if your function
	//provides the same results
	printf("power(2,3) = %d\n", power(2,3));
	printf("fibonacci(5) = %d\n", fibonacci(5));
}