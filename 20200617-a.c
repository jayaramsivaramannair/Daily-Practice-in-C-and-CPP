/*
Write a program to generate Pascal's Triangle pattern shown below:

                    1
                1       1
            1       2       1
        1       3       3       1
    1       4       6       4       1
1       5       10      10      5       1

Problem Source: 101 C Programming Challenges - Challenge 40
*/

#include <stdio.h>

int fact(int n);

int main(int argc, char* argv[])
{
    int i, l, num = 5;

    for(l = 0; l <= num; l++)
    {
        for (i = 0; i <= (num - l - 1); i++)
        {
            printf(" ");
        }

        for (i = 0; i <= l; i++)
        {
            printf("%d ", fact(l)/(fact(i) * fact(l - i)));
        }

        printf("\n");
    }
        
    return 0;
}

int fact(int n)
{
    int i, p;

    p = 1;

    for (i = 1; i <= n; i++)
    {
        p = p * i;
    }

    return p;
}