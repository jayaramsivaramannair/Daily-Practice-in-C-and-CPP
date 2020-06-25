/*
Write a program to obtain binary equivalent of a positive decimal integer

Problem Source: 101 C Programming Challenges - Challenge 67
*/

#include <stdio.h>
#include <string.h>

void binaryEquivalent(int n);

int main(int argc, char* argv[])
{
    int n;
    printf("Enter a non-negative decimal number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        binaryEquivalent(n);
    } else {
        printf("Invalid Input!\n");
    }
    return 0;
}

void binaryEquivalent(int n)
{
    char binary[100];
    int rem, front, back, i;
    char ch;

    i = 0;
    while (n > 0)
    {
        rem = n % 2;
        if (rem == 0)
        {
            binary[i] = '0';
        } else {
            binary[i] = '1';
        }
        i++;
        n = n / 2;
    }
    binary[i] = '\0';
    
    front = 0;
    back = i - 1; // This excludes the null character

    while (front < back)
    {
        ch = binary[front];
        binary[front] = binary[back];
        binary[back] = ch;

        front++;
        back--;
    }
    printf("Binary Equivalent: %s\n", binary);
}