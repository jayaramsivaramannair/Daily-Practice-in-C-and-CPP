/*

Write a program to receive a character from keyboard and then determine whether the character
entered is an upper case alphabet, lower case alphabet, digit or special symbol.

Problem Source: 101 C Programming Challenges - Challenge 09

*/


#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("Upper Case Letter\n");
    } else if (islower(ch))
    {
        printf("Lower Case Letter\n");
    } else if (isdigit(ch))
    {
       printf("A Digit\n");
    } else {
       printf("A Special Symbol\n");
    }

    return 0;
}