/*
Write a program to receive 5 numbers from keyboard and then report 
which is the biggest of the 5 numbers

Problem Source: 101 C Programming Challenges - Challenge 08

*/


#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, c, d, e;
    int max;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    max = a;

    if (b > a)
    {
        max = b;
    }

    if (c > b)
    {
        max = c;
    }

    if (d > c)
    {
        max = d;
    }

    if (e > d)
    {
        max = e;
    }

    printf("Biggest of the 5 numbers is: %d\n", max);
    return 0;
}