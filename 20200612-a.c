/*
Write a program to generate all unique combinations of 1, 2 and 3 using for loops.

Problem Source: 101 C Programming Challenges - Challenge 21
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i, j, k;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                if (i != j && j != k && k != i)
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}