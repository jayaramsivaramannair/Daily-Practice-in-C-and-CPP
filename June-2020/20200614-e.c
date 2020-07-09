/*

Write a program to print the first 20 terms of fibonacci series

Problem Source: 101 C Programming Challenges - Challenge 32

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 1, j = 1, k, terms = 1;

    printf("First 20 numbers in the fibonacci series are: \n");

    while (terms <= 20)
    {
        if (terms <= 2)
        {
            printf("%d\n", i);
        } else {
            k = i + j;
            printf("%d\n", k);
            i = j;
            j = k;
        }

        terms++;
    }

    return 0;
}