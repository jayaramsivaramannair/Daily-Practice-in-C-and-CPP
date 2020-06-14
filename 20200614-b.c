/*
Ramanujan number is the smallest number that can be expressed as sum of
two cubes in two different ways. Write a program to print all such numbers
up to reasonable limit.

Problem Source: 101 C Programming Challenges - Challenge 29

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i, j, k, l;

    for (i = 1; i <= 30; i++)
    {
        for (j = 1; j <= 30; j++)
        {
            for (k = 1; k <= 30; k++)
            {
                for (l = 1; l <= 30; l++)
                {
                    if ((i != j && i != k && i != l) &&
                        (j != k && j != l && j != i) &&
                        (k != i && k != j && k != l) &&
                        (l != i && l != j && l != k))
                        {
                            if (i * i * i + j * j * j == k * k * k + l * l * l)
                            {
                                printf("%d\t%d\t%d\t%d\t%d\t\n", i * i * i + j * j * j, i, j, k, l);
                            }
                        }
                }
            }
        }
    }

    return 0;
}