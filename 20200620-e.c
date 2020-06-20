/*
A positive integer is entered thorugh the keyboard; write a function to find the binary
equivalent of this number using recursion. 

Problem Source: 101 C Programming Challenges - Challenge 51
*/

#include <stdio.h>

void bin(int n);

int main(int argc, char* argv[])
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    printf("The binary equivalent is: \n");
    bin(n);
    printf("\n");

    return 0;
}

void bin(int n)
{
    int r;

    r = n % 2;
    n = n / 2;

    if (n != 0)
    {
        bin(n);
    }

    printf("%d ", r);
}