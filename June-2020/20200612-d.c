/*
Write a program to receive a positive integer and find its octal equivalent.

Problem Source: C Programming Challenges - Challenge 24
*/



#include <stdio.h>

int main(int argc, char* argv[])
{
    int dec, remainder, place = 1, oct = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &dec);

    printf("Octal Equivalent is ");

    
    while (dec != 0)
    {
        remainder = dec % 8;
        oct = remainder * place + oct;// pow(10, index = 0) can also be used instead of place variable
        place = place * 10;
        dec = dec / 8;
    }
    printf("%d", oct);
    printf("\n");
    return 0;
}