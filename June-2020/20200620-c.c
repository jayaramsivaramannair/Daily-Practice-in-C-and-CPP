/*
Write a program that uses recursion to calculate factorial value of a number entered
through the keyboard.

Problem Source: 101 C Programming Challenges - Challenge 48
*/

#include <stdio.h>

int fact(int n);

int main(int argc, char* argv[])
{
    int n;

    printf("Enter any number: \n");
    scanf("%d", &n);

    printf("Factorial value = %d\n", fact(n));

    return 0;
}

int fact(int n)
{
    int product;
    if (n == 0)
    {
        return 1;
    } else {
        product = n * fact(n - 1);
    }

    return product;
}