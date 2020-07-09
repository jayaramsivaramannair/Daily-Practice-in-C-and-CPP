/*
Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.

Problem Source: 101 C Programming Challenges - Challenge 34
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int hour = 0;

    while (hour < 24)
    {

        if(hour == 0)
        {
        printf("12 Midnight\n");
        } else if (hour < 12)
        {
            printf("%d A.M.\n", hour % 12);
        } else if (hour > 12)
        {
            printf("%d P.M.\n", hour % 12);
        } else if (hour == 12)
        {
            printf("%d Noon\n", hour);
        }

        hour++;
    }

    return 0;
}