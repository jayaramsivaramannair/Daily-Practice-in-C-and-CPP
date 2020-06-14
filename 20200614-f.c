/*
When interest compounds q times per year at an annual rate of r % for n years, the
principal p compounds to an amount a as per the following formula

a = p(1 + r/q/100)*pow(nq)

Write a program to read p, r, n & q and calculate the corresponding a.

Problem Source: 101 C Programming Challenges - Challenge 33
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float p, n, c, a, r;

    printf("Enter the principal amount: \n");
    scanf("%f", &p);

    printf("Enter the rate of interest: \n");
    scanf("%f", &r);

    printf("Enter the number of years: \n");
    scanf("%f", &n);

    printf("Enter the compounding period: \n");
    scanf("%f", &c);
   
    a = p * pow((1 + (r/c/100)), (n * c));
    
    printf("Total amount = %f\n", a);

    return 0;
}