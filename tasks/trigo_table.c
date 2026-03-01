// A function that prints a table of values for sine and cosine between (0, 1)
// Pho Thin Maung
// Mar 2 2026

#include <stdio.h>
#include <math.h>

/**
 * @brief Prints a table of values for sine and cosine between (0, 1)
 * 
 * This program prints a table of sine and cosine values for values between (0, 1)
 * with step size of 0.1. The table is printed in a formatted style.
 * 
 * @return 0 if the program runs successfully
 */
int main()
{
    // To prevent large rows of table, here we calculate only one decimal places values between (0, 1)
    double start = 0.1; // started from 0.1,because of values are between (0, 1)
    double step = 0.1;  // step for every rows of table
    double end = 0.9;   // end at 0.9,because of values are between (0, 1)

    // Print Table Title
    printf("\nTable of values for sine and cosine between (0, 1)\n\n");
    // Print Table Header
    printf("| Num Value |  Sin Value | Cos Value |\n");
    // print table row divider
    printf("| --------  |  --------  | --------  |\n");
    // loop the values
    // leave first expression
    for (; start < end; start += step)
    {
        // calculate sine and cosine values
        double sin_value = sin(start);
        double cos_value = cos(start);
        // print table rows , three decimal places of   sine and cosine values will printed.
        printf("|  %.1f      |   %.3f    |   %.3f   |\n", start, sin_value, cos_value);
        // do not print table row divider for last row
        if (start < end - step)
        {
            // print table row divider
            printf("| --------  |  --------  | --------  |\n");
        }
    };
    return 0;
}
