#include <stdio.h>


// Function prototype
unsigned long long factorial(int n);

long my_factorial(unsigned int n)
{
 unsigned int i = n;
 long f = 1;
 while (0<i)
 {
    f = f * i;
    i--;
 }
 return f;
}

int main(){
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
     if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    };
    printf("Factorial of %d = %lf\n",n,my_factorial(n));
    return 0;
}

// Recursive function to find the factorial
unsigned long long factorial(int n) {
    if (n == 0) // Base case: 0! is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}