/*
Write a program to receive two integers from the keyboard and obtain LCM and GCD
of these two numbers through functions lcm() and gcd().

Problem Source: 101 C Programming Challenges - Challenge 36
*/

#include <stdio.h>

int gcd(int n1, int n2);
int lcm(int n1, int n2);

int main(int argc, char* argv[])
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    printf("GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));
    printf("LCM of %d and %d is %d\n", n1, n2, lcm(n1, n2));

    return 0;
}

int gcd(int n1, int n2)
{
    int hcf = 1, i;

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int lcm(int n1, int n2)
{
    int max_val;
    max_val = (n1 > n2) ? n1 : n2;

    while(1)
    {
        if (max_val % n1 == 0 && max_val % n2 == 0)
        {
            break;
        }
        max_val++;
    }
    return max_val;
}