/* 
Two numbers are input through the keyboard into two locations x and y.
Write a program to interchange the contents of x and y.

Problem Source: 101 C Programming Challenges - Challenge 03
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i, j, temp;
    printf("Enter two numbers: \n");
    scanf("%d %d", &i, &j);

    printf("Before intercharge: i = %d, j = %d\n", i, j);

    i = i + j; // 5 = 2 + 3
    j = i - j; // 2 = 5 - 3
    i = i - j; // 3 = 5 - 2

    printf("After interchange: i = %d, j = %d\n", i, j);

    return 0;
}
