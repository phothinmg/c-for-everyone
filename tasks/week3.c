/*
Fix D. P's mistake (week 3)
Pho Thin Maung
Mar 2 2026
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    double interval;
    int i;
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        // we have to use fabs , beacuse type of sin funtion value is double
        // printf("sin( %lf ) = %lf \t", interval, abs(sin(interval)));
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
    }

    printf("\n+++++++\n");
    return 0;
}