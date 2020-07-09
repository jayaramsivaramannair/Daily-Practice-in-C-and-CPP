/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all three
points fall on one straight line.

Problem Source: 101 C Programming Challenges - Challenge 13
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x1, y1, x2, y2, x3, y3, a, b, c;

    printf("Enter x and y coordinates for the first point:\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter x and y coordinates for the second point:\n");
    scanf("%d %d", &x2, &y2);

    printf("Enter x and y coordinates for the third point:\n");
    scanf("%d %d", &x3, &y3);

    a = (abs(y1 - y2));
    b = (abs(y2 - y3));

    if((x1 == x2) && (x2 == x3))
    {
        printf("Points FALL on a straight line\n");
    } else if (a == b)
    {
        printf("Points FALL on a straight line\n");
    } else {
        printf("Points DO NOT FALL on a straight line\n");
    }
    
    return 0;
}