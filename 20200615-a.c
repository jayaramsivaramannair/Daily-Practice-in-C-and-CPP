/*
Write a general-purpose function to convert any given year into its roman equivalent.
Use the following roman equivalents for decimal numbers:

1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M.

Example:
Roman equivalent of 1988 is mdcccclxxxviii
Roman equivalent of 1525 is mdxxv

Problem Source: 101 C Programming Challenges - Challenge 35
*/

#include <stdio.h>

int romanise(int, int, char);

int main(int argc, char* argv[])
{
    int yr;

    printf("Enter year: \n");
    scanf("%d", &yr);

    yr = romanise(yr, 1000, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 50, 'l');
    yr = romanise(yr, 10, 'x');
    yr = romanise(yr, 5, 'v');
    yr = romanise(yr, 1, 'i');

    printf("\n");

    return 0;
}

int romanise(int y, int k, char ch)
{
    int i, j;

    if (y == 4)
    {
        printf("iv");
        return(y % 4);
    }

    if (y == 9)
    {
        printf("ix");
        return(y % 9);
    }

    if (y == 49)
    {
        printf("il");
        return (y % 49);
    }

    if (y == 99)
    {
        printf("ic");
        return(y % 99);
    }

    if (y == 499)
    {
        printf("id");
        return(y % 499);
    }

    if (y == 999)
    {
        printf("im");
        return(y % 999);
    }

    j = y / k;

    for (i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }

    return (y % k);
}