/*
Write a program that receives two numbers in a and b and then calls the function
power(a, b), to calculate the value of a raised to b.

Problem Source: 101 C Programming Challenges - Challenge 38
*/

#include <stdio.h>

float power(int a, int b);

int main(int argc, char* argv[])
{
    int a, b;

    printf("Enter the base: ");
    scanf("%d", &a);

    printf("Enter the power: ");
    scanf("%d", &b);

    printf("%d raised to %d is %f\n", a, b, power(a,b));


    return 0;
}

float power(int a, int b)
{
    int i, exponent;
    float result = 1.0;

    if (b < 0)
    {
        exponent = b * -1;
    } else if (b > 0)
    {
        exponent = b;
    } else if (b == 0)
    {
        return 1.0;
    }

    for (i = 1; i <= exponent; i++)
    {
        result *= a;
    }

    if (b < 0)
    {
        result = 1 / result;
    }
    return result;
}