/*
Write a program that generates and prints the Fibonacci words of order 0 through 5. 
If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab", f(4) = "babba", etc.

Problem Source: 101 C Programming Challenges - Challenge 79
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;

    printf("%s\n", lastbutoneterm);
    printf("%s\n", lastterm);

    for(int i = 0; i < 3; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbutoneterm);
        printf("%s\n", str);

        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }

    return 0;
}