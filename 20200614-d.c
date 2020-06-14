/*
Write a program to produce the following output:

            1
        2       3
    4       5       6
7       8       9       10

Problem Source: 101 C Programming Challenges - Challenge 31
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 1, line = 1, i, spaces = 20, j;

    while (n <= 10 || line <= 4)
    {
        i = line;

        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        while (i > 0)
        {
            printf(" %d ", n);
            n++;
            i--;
        }
        printf("\n");
        line++;
        spaces -= 2;
    }

    return 0;
}