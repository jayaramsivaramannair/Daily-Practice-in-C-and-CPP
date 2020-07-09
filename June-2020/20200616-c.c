/*
A positive integer is entered through the keyboard. Write a function to obtain
the prime factors of this number.

For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.

Problem Source: 101 C Programming Challenges - Challenge 39
*/


#include <stdio.h>

void prime_fact(int n);

int main(int argc, char* argv[])
{
    int n;

    printf("Enter a number for its prime factors: ");
    scanf("%d", &n);

    prime_fact(n);
    printf("\n");

    return 0;
}

void prime_fact(int n)
{
    int i = 2;

    printf("Prime factors of %d are: ", n);
    while (n != 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        } else {
            i++;
            continue; //Skip the current iteration when i is incremented
        }
        n = n / i;
    }
}