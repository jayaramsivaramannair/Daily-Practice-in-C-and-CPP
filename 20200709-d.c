/*
Write macro definitions for the following and use them in main():

DEGREES - Converts radians into degrees
RADIANS - Converts degrees into radians
ODD - Rounds a number up to the nearest odd integer
EVEN - Rounds a number up to the nearest even integer

Problem Source: 101 C Programming Challenges - Challenge 57
*/

#include <stdio.h>

#define PI 3.14
#define RAD(a) ((a) * PI/180)
#define DEG(n) ((n) * 180/PI)
#define ODD(n) ((n) % 2 == 0 ? n + 1 : n)
#define EVEN(n) ((n) % 2 == 1 ? n + 1 : n)

int main(int argc, char* argv[])
{
    float deg;
    int num;

    printf("Enter an angle in degrees: \n");
    scanf("%f", &deg);
    printf("deg = %f rad = %f\n", deg, RAD(deg));
    printf("rad = %f deg = %f\n", RAD(deg), deg);

    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("num = %d nearest odd = %d\n", num, ODD(num));

    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("num = %d nearest even = %d\n", num, EVEN(num));

    return 0;
}