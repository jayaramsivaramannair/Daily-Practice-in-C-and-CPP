/*
Write a program to find the factorial value of any number entered 
through the keyboard

Problem Source: 101 C Programming Challenges - Challenge 28

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, i;
    unsigned long int fact = 1;

    printf("Enter a number to derive its factorial: ");
    scanf("%d", &n);

    i = n;

    while (n > 0)
    {
        fact = fact * n;
        n = n - 1;
    }
    printf("The factorial of %d is %lu\n", i, fact);

    return 0;
}