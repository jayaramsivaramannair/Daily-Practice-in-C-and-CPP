/*
Write down macro definitions for the following and use them from main():

1. To test whether a character is a small case letter or not.
2. To test whether a character is an upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of the macros you defined in 
1 and 2 above.
4. To obtain the bigger of two numbers.

Problem Source: 101 C Programming Challenges - Challenge 53
*/

#include <stdio.h>
#include <ctype.h>

#define LOWER_CASE(ch) islower(ch)
#define UPPER_CASE(ch) isupper(ch)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(int argc, char* argv[])
{
    char ch;
    int a, b;

    printf("Enter any alphabet/character:\n");
    scanf("%c", &ch);

    printf("Enter any two numbers:\n");
    scanf("%d %d", &a, &b);

    if(LOWER_CASE(ch))
    {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is NOT lowercase.\n", ch);
    }

    if(UPPER_CASE(ch))
    {
        printf("%c is uppercase.\n", ch);
    } else {
        printf("%c is NOT uppercase.\n", ch);
    }

    if (LOWER_CASE(ch) || UPPER_CASE(ch))
    {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is NOT an alphabet.\n", ch);
    }

    if (MAX(a,b) == a)
    {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is NOT greater than %d\n", a, b);
    }

    return 0;
}