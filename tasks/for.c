#include <stdio.h>

int main()
{
    int blanks = 0, digits = 0, total_chars = 0;
    char c;
    for (; ((c = getchar()) != EOF); total_chars++)
    {
        if (c == ' ')
            blanks++;
        else if (c >= '0' && c <= '9')
            digits++;
    };
    printf(" blanks = %d, digits = %d, tatal_chars = %d\n\n",blanks,digits,total_chars);
    return 0;
}