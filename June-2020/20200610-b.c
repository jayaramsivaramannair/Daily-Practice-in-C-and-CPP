/*
Write a program that receives month and date of birth as input and prints the corresponding
Zodiac sign based on the following table:

Zodiac Sign             From - To
----------------------------------
Capricorn               December 22 - January 19
Aquarius                January 20 - Febraury 17
Pisces                  February 18 - March 19
Aries                   March 20 - April 19
Taurus                  April 20 - May 20
Gemini                  May 21 - June 20
Cancer                  June 21 - July 22
Leo                     July 23 - August 22
Virgo                   August 23 - September 22
Libra                   September 23 - October 22
Scorpio                 October 23 - November 21
Sagittarius             November 22 - December 21

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int d, m;

    printf("Enter your date of birth as (mm/dd):\n");
    scanf("%d/%d", &m, &d);

    if (d <= 0 || m <= 0)
    {
        printf("Invalid Input\n");
    } else if (m == 1)
    {
        if (d >=1 && d < 20)
        {
            printf("Capricorn\n");
        } else if (d >= 20 && d <= 31)
        {
            printf("Aquarius\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 2)
    {
        if (d >= 1 && d < 19)
        {
            printf("Aquarius\n");
        } else if (d >= 18 && d <= 29)
        {
            printf("Pisces\n");
        } else {
            printf("Invalid Input\n");
        }
    } else if (m == 3)
    {
        if (d >= 1 && d < 20)
        {
            printf("Pisces\n");
        } else if (d >= 20 && d <= 31)
        {
            printf("Aries\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 4)
    {
        if (d >= 1 && d < 20)
        {
            printf("Aries\n");
        } else if (d >= 20 && d <= 30)
        {
            printf("Taurus\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 5)
    {
        if (d >= 1 && d < 21)
        {
            printf("Taurus\n");
        } else if (d >= 21 && d <= 31)
        {
            printf("Gemini\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 6)
    {
        if (d >= 1 && d <= 21)
        {
            printf("Gemini\n");
        } else if (d >= 21 && d <= 30)
        {
            printf("Cancer\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 7)
    {
        if (d >= 1 && d < 23)
        {
            printf("Cancer\n");
        } else if (d >= 23 && d <= 31)
        {
            printf("Leo\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 8)
    {
        if (d >= 1 && d < 23)
        {
            printf("Leo\n");
        } else if (d >= 23 && d <= 31)
        {
            printf("Virgo\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 9)
    {
        if (d >= 1 && d < 23)
        {
            printf("Virgo\n");
        } else if (d >= 23 && d <= 30)
        {
            printf("Libra\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 10)
    {
        if (d >= 1 && d < 23)
        {
            printf("Libra\n");
        } else if (d >= 23 && d <= 31)
        {
            printf("Scorpio\n");
        } else {
            printf("Invalid Input\n");
        }
    } else if (m == 11)
    {
        if (d >= 1 && d < 22)
        {
            printf("Scorpio\n");
        } else if (d >= 22 && d <= 30)
        {
            printf("Sagittarius\n");
        } else {
            printf("Invalid Input\n");
        }

    } else if (m == 12)
    {
        if (d >= 1 && d < 22)
        {
            printf("Sagittarius\n");
        } else if (d >= 22 && d <= 31)
        {
            printf("Capricorn\n");
        } else {
            printf("Invalid Input\n");
        }

    } else {
        printf("Invalid Input\n");
    }

    return 0;
}