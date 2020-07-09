/*
Write down macro definitions for the following:

1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert an uppercase alphabet to lowercase.
4. To obtain the biggest of three numbers.

Problem Source: 101 C Programming Challenges - Challenge 55
*/

#include <stdio.h>

#define MEAN(a, b) (((a) + (b)) / 2)
#define ABSOLUTE(x) (((x) < 0) ? (x) * -1 : (x))
#define TOLOWER(x) ((x) + 32)
#define MAX(x, y, z) ((x) > (y) && (x) > (z) ? (x) : (y) > (x) && (y) > (z) ? (y) : (z))

int main(int argc, char *argv[])
{
    int a, b, c, m, val, big;
    char ch;

    printf("Enter any two numbers:\n");
    scanf("%d %d", &a, &b);

    m = MEAN(a,b);
    printf("Mean is %d\n", m);

    printf("Enter any number: \n");
    scanf("%d", &a);

    val = ABSOLUTE(a);
    printf("Absolute value is %d\n", val);

    getchar();
    printf("Enter any uppercase character: \n");
    scanf("%c", &ch);

    ch = TOLOWER(ch);
    printf("Lower case character is %c\n", ch);

    printf("Enter any three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    big = MAX(a, b, c);
    printf("Biggest number is: %d\n", big);

    return 0;
}
