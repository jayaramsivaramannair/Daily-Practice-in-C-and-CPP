/*
Write macro definitions with arguments for calculation of Simple Interest and 
Amount. Store these macro definitions in a file called "interest.h". 
Include this file in your program, and use the macro definitions for calculating
simple interest and amount.

Problem Source: 101 C Programming Challenges - Challenge 56
*/

#include <stdio.h>
#include "interest.h"

int main(int argc, char* argv[])
{
    int p, n;
    float amt, r, si;

    printf("Enter Principle, number of years and rate of interest\n");
    scanf("%d %d %f", &p, &n, &r);

    si = SI(p,n,r);
    amt = p + si;

    printf("Simple interest is: %f\n", si);
    printf("Amount is: %f\n", amt);

    return 0;
}