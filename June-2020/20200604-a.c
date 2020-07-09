/* 
Write a program to round off an integer i to the next largest multiple of another integer j.
For example, 256 days when rounded off to the next largest multiple divisble by a week 
results into 259.

Problem Source: 101 C Programming Challenges - Challenge 01
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
   int i, j, k;

   printf("Enter values of i and j: \n");
   scanf("%d %d", &i, &j);

   k = i + j - i % j;

   printf("Next largest multiple = %d\n", k);
   return 0;
}