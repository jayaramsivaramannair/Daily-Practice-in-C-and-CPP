/*

If the lengths of the sides of a triangle are denoted by a, b, and c, then area of a triangle
is given by

area = sqrt(S(S-a)(S-b)(S-c))

where, S = (a + b + c) / 2.

Write a program that receives three sides of a triangle and calculates its area and
perimeter through a function. 

Problem Source: 101 C Programming Challenges - Challenge 42

*/

#include <stdio.h>
#include <math.h>

void cal_area_perim(float a, float b, float c, float *area, float *perim);

int main(int argc, char* argv[])
{
    float a, b, c;
    float area, perim;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    cal_area_perim(a, b, c, &area, &perim);

    printf("Area of the triangle = %f\n", area);
    printf("Perimeter of the triangle = %f\n", perim);


    return 0;
}

void cal_area_perim(float a, float b, float c, float *area, float *perim)
{
    *perim = a + b + c;

    *area = sqrt(*perim/2 * (*perim/2 - a) * (*perim/2 - b) * (*perim/2 - c));
}