/*
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis
or on the origin 

Problem Source: 101 C Programming Challenges - Challenge 15
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    float x, y;
    printf("Enter the coordinates x and y for a point: \n");
    scanf("%f %f", &x, &y);

    if (x == 0 && y != 0)
    {
        printf("The point lies on the y-axis\n");
    } else if (x != 0 && y == 0)
    {
        printf("The point lies on the x-axis\n");
    } else if (x == 0 & y == 0)
    {
        printf("The point lies on the origin\n");
    } else 
    {
        if (x > 0 && y > 0)
        {
            printf("Point lies in the First Quadrant\n");
        } else if (x < 0 && y > 0)
        {
            printf("Point lies in the Second Quadrant\n");
        } else if (x < 0 && y < 0)
        {
            printf("Point lies in the Third Quadrant\n");
        } else {
            printf("Point lies in the Fourth Quadrant\n");
        }
    }

    return 0;
}