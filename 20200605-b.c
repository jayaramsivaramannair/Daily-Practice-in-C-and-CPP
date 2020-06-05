/*
If a year is input through the keyboard, write a program to determine whether the year
is a leap year or not.

Problem Source: 101 C Programming Challenges - Challenge 11
*/


#include <stdio.h>

int main(int argc, char* argv[])
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);


    if (!(year % 400))
    {
        printf("%d IS a leap year\n", year);
    } else if(!(year % 4) && (year % 100))
    {
        printf("%d IS a leap year\n", year);
    } else {
        printf("%d IS NOT a leap year\n", year);
    }


    return 0;
}