#include <stdio.h>
/*
 * Chapter 1 Exercise 1-4.c print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300 floating-point version
 *
 * By @abe_SlimHacker
 */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
	
    printf("Celsius\t\tFahrenheit\n");

    fahr = celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        printf("%7.0f\t%18.0f\n", celsius, fahr);
        fahr = fahr + step;
        celsius = celsius + step;
    }
}
