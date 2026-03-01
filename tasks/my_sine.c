// A program that prints the sine function for an input x between (0, 1)
// Pho Thin Maung
// Mar 1 , 2026

#include <stdio.h>

int my_factorial(unsigned int n)
{
 unsigned int i = n;
 unsigned long long f = 1;
 while (0<i)
 {
    f *= i;
    i--;
 }
 return f;
}

/**
 * Calculate the sine function for an input x between (0, 1)
 * @param x a double between (0, 1)
 * @return the sine of x
 */
double my_sine(double x)
{
    // calculate the sine of a number using the Taylor Series (Trigonometric functions)
    // https://en.wikipedia.org/wiki/Taylor_series#:~:text=binomial%20approximation.-,Trigonometric%20functions,-%5Bedit%5D

    double r;

    // 1. Calculate the factorials

    int f_1 = my_factorial(1);                                 // 1!
    int f_3 = 3 * 2 * 1;                         // 3!
    int f_5 = 5 * 4 * 3 * 2 * 1;                 // 5!
    int f_7 = 7 * 6 * 5 * 4 * 3 * 2 * 1;         // 7!
    int f_9 = 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1; // 9!

    // 2. Calculate the exponents

    double e_1 = x;                                 // x^1
    double e_3 = x * x * x;                         // x^3
    double e_5 = x * x * x * x * x;                 // x^5
    double e_7 = x * x * x * x * x * x * x;         // x^7
    double e_9 = x * x * x * x * x * x * x * x * x; // x^9

    // 3. Calculate each term

    double t_1 = e_1 / f_1;
    double t_3 = e_3 / f_3;
    double t_5 = e_5 / f_5;
    double t_7 = e_7 / f_7;
    double t_9 = e_9 / f_9;

    // 4. Adding terms step-by-step

    r = t_1 - t_3;
    r = r + t_5;
    r = r - t_7;
    r = r + t_9;

    return r;
}

/**
 * Main entry point for the program
 *
 * This program takes an input x in (0, 1) and prints the sine of x
 *
 * @return 0 if the input is valid, 1 if the input is invalid
 */
int main()
{
    double x;

    printf("Enter a value between 0 and 1: ");

    scanf("%lf", &x);

    if (x <= 0.0 || x >= 1.0)
    {
        printf("Value must be between (0, 1).\n");
        return 1;
    }

    printf("sin(%.6f) = %.7f\n", x, my_sine(x));
    return 0;
}