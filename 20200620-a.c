/*
If a positive number is entered through the keyboard, write a recursive function
to obtain the prime factors of the number.

Problem Source: 101 C Programming Challenges - Challenge 46
*/

#include <stdio.h>

void factorise(int n, int i);

int main(int argc, char* argv[])
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    printf("Prime factors are: \n");
    factorise(n, 2);
    printf("\n");

    return 0;
}

void factorise(int n, int i)
{
    if (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        } else {
            i++;
        }

        factorise(n, i);
    }
}