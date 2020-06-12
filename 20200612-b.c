/*
Write a program that finds four-digit perfect squares where the number represented by
the first two digits and the number represented by the last two digits are also 
perfect squares

Problem Source: 101 C Programming Challenges - Challenge 22
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int i, a, d4, d3, d2, d1, num, nleft, nright, x, y;

    for (int i = 1000; i <= 9999; i++)
    {
        a = sqrt(i);
        if (i == a * a) { //checks if its i is a perfect square or not
            num = i;
            
            // d1, d2, d3 & d4 represent individual digits of the original number
            d4 = num % 10;
            num = num / 10;

            d3 = num % 10;
            num = num / 10;

            d2 = num % 10;
            num = num / 10;

            d1 = num % 10;

            //Concatenate the first two digits and last two digits separately
            nleft = d1 * 10 + d2;
            nright = d3 * 10 + d4;

            x = sqrt(nleft);
            y = sqrt(nright);

            if (nleft == x * x && nright == y * y) // Checks if the first half and second half is a perfect square
            {
                printf("Desired number = %d\n", i);
            }
        }
    }

    return 0;
}