/*
Int Data type in C
Pho Thin Maung
Mar 1 2026
*/

#include<stdio.h>

int main(void)
{   
   short short_a = 5;
   int normal_a = 67;
   unsigned unsigned_a = 67u;
   long long_a = 67l;
   printf("Short a = %hd , Divided by int 2 is %d\n",short_a,short_a/2);
   printf("Short a = %hd , Divided by float 2 is %lf\n",short_a,short_a/2.0);
   printf("67 as char %c\n",normal_a);
   printf("Size bytes of short, int,unsigned,long -> ");
   printf("%lu , %lu , %lu , %lu\n",sizeof(short_a),sizeof(normal_a),sizeof(unsigned_a),sizeof(long_a));
   return 0;
}