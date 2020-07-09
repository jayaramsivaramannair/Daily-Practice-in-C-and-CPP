/*
Write a program to print all prime numbers from 1 to 300

Problem Source: 101 C Programming Challenges - Challenge 23
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 1, k;

    printf("Prime numbers between 1 & 300 are: \n");
    printf("It's a prime number: %d\n", i);

    for (; i <= 300; i++)
    {
        for (k = 2; k < i; k++)
        {
           if (i % k == 0) // If a number is divisible by any number lower than it
           {
               break; // Skip and move to the next number
           } 
        }
        
        if (k == i) // The number is not divisible by any number lower than it
        {
            printf("It's a prime number: %d\n", i);
        }
    }

    return 0;
}