/*
Char in C
Pho Thin Maung
Mar 1 2026
*/

#include<stdio.h>

int main(void)
{   
    char c = 'a';
    printf("char in ASCII is %d\n",c);
    printf("char in character is %c\n",c);
    printf("Three consecutive chars are : %c%c%c\n",c,c+1,c+2);
    printf("Three Bell Rings char are :  %c%c%c\n",'\a','\a','\a');
    return 0;
}