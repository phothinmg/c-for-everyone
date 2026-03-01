#include <stdio.h>

void print_scientific_from_digits(const int digits[], int length, int significant_digits) {
    if (length <= 0 || significant_digits < 1) {
        return;
    }

    int first = digits[length - 1];
    printf("%d", first);

    if (significant_digits > 1) {
        printf(".");
        for (int k = 1; k < significant_digits; ++k) {
            int index = length - 1 - k;
            if (index >= 0) {
                printf("%d", digits[index]);
            } else {
                printf("0");
            }
        }
    }

    printf("e+%d", length - 1);
}

int main() {
    int n;
    enum { MAX_DIGITS = 5000 };
    int digits[MAX_DIGITS] = {0};
    int length = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        digits[0] = 1;

        for (int value = 2; value <= n; ++value) {
            int carry = 0;

            for (int i = 0; i < length; ++i) {
                int product = digits[i] * value + carry;
                digits[i] = product % 10;
                carry = product / 10;
            }

            while (carry > 0) {
                if (length >= MAX_DIGITS) {
                    printf("Result too large for internal buffer.\n");
                    return 1;
                }
                digits[length] = carry % 10;
                carry /= 10;
                ++length;
            }
        }

        printf("Factorial of %d = ", n);
        for (int i = length - 1; i >= 0; --i) {
            printf("%d", digits[i]);
        }
        printf("\n");

        printf("Scientific notation: ");
        print_scientific_from_digits(digits, length, 7);
        printf("\n");
    }

    return 0;
}
