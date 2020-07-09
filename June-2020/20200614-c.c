/*

Write a program to print out all Armstrong numbers between 1 and 500. 
If the sum of cubes of each digit of the number is equal to the number itself, then
the number is called an armstrong number, For example, 153 = (1 * 1 * 1)
+ (5 * 5 * 5) + (3 * 3 * 3)

Problem Source: 101 C Programming Challenges - Challenge 30
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, i, digit = 0, cube = 0;

    printf("The list of armstrong numbers between 1 and 500 are: \n");

    for(n = 1; n <= 500; n++)
    {
        i = n;

        while (i > 0)
        {   
            digit = i % 10;
            i = i / 10;
            cube += (digit * digit * digit);
        }

        if (cube == n) // Check is the cube of digits is equivalent to the number itself
        {
            printf("%d\n", n);
        }

        cube = 0; // Reset the total in cube variable
    }

    return 0;
}