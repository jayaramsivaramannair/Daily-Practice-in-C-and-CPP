/*
Write a recursive function to obtain the running sum of first 25 natural numbers.

Problem Source: 101 C Programming Challenges - Challenge 52
*/

#include <stdio.h>

int sum_natural(int n);

int main(int argc, char* argv[])
{
    int n;

    printf("Enter the positive largest number for running sum: \n");
    scanf("%d", &n);

    printf("Running Sum: %d\n", sum_natural(n));
    sum_natural(n);

    return 0;
}

int sum_natural(int n)
{
    int sum = n;

    if (n > 0)
    {
        sum = sum + sum_natural(n-1);
    }
    return sum;
}