#include <stdio.h>

int main()
{
    float a, b, sum;
    printf("Input two float : ");
    scanf("%f%f", &a, &b);
    printf("a = %f , b = %f\n\n", a, b);
    sum = a + b;
    printf("sum = %f\n\n", sum);
    return 0;
}