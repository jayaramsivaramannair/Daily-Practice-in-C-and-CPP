/*
Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. 
In a Fibonacci Sequence, the sum of two successive terms gives the third term.
Following are the first few terms of the Fibonacci sequence:

 1 1 2 3 5 8 13 21 34 55 89

Problem Source: 101 C Programming Challenges - Challenge 50
*/

#include <stdio.h>

void fibonacci(int term_0, int term_1, int terms); // Fibonacci of first 25 numbers 

int main(int argc, char* argv[])
{
    int terms = 25, term_0 = 1, term_1 = 1;
    printf("%d\n", term_0);
    printf("%d\n", term_1);
    terms = terms - 2;
    fibonacci(term_0, term_1, terms);

    return 0;
}

void fibonacci(int term_0, int term_1, int terms)
{
    int term_2;

    if (terms >= 1)
    {
        term_2 = term_0 + term_1;
        printf("%d\n", term_2);
        terms--;
        fibonacci(term_1, term_2, terms); 
    }
}