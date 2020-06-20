/*
A positive integer is entered through the keyboard, write a recursive function to
calculate sum of digits of the 5-digit number.

Problem Source: 101 C Programming Challenges - Challenge 47
*/

#include <stdio.h>

int sum_digits(int n);

int main(int argc, char* argv[])
{
    int n;

    printf("Enter number: \n");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sum_digits(n));

    return 0;
}

int sum_digits(int n)
{
    int sum = 0, digit;
    
    if (n == 0)
    {
        return 0;
    } else {
        digit = n % 10;
        n = n/ 10;
        sum = digit + sum_digits(n);
    }

    return sum;
}