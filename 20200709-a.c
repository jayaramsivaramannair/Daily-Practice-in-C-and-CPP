/*
Write macro definitions with arguments for calculation of area and perimeter of a triangle,
a square and a circle. Store these macro definitions in a file called "areaperi.h". Include
this file in your program, and call the macro definitions for calculating area and perimeter
for a square, triangle and circle.

Problem Source: 101 C Programming Challenges - Challenge 54
*/

#include <stdio.h>
#include <math.h>
#include "areaperi.h"

int main(int argc, char *argv[])
{
    float r, p_cir, a_cir;
    float sid, p_sqr, a_sqr;
    float sid1, sid2, sid3, a_tri, p_tri;

    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    a_cir = AREAC(r);
    printf("Area of circle = %f\n", a_cir);
    p_cir = PERIC(r);
    printf("Circumference of cirlce = %f\n", p_cir);

    printf("Enter side of a square:\n");
    scanf("%f", &sid);
    a_sqr = AREAS(sid);
    printf("Area of Square = %f\n", a_sqr);
    p_sqr = PERIS(sid);
    printf("Perimeter of square = %f\n", p_sqr);

    printf("Enter length of 3 sides of triangle:\n");
    scanf("%f%f%f", &sid1, &sid2, &sid3);
    a_tri = AREAT(sid1, sid2, sid3);
    printf("Area of triangle = %f\n", a_tri);
    p_tri = PERIT(sid1, sid2, sid3);
    printf("Perimeter of triangle = %f\n", p_tri);

    return 0;
}