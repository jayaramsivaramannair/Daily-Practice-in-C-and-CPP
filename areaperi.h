/*
Write macro definitions with arguments for calculation of area and perimeter of a triangle,
a square and a circle. Store these macro definitions in a file called "areaperi.h". Include
this file in your program, and call the macro definitions for calculating area and perimeter
for a square, triangle and circle.

Problem Source: 101 C Programming Challenges - Challenge 54
*/

#define PI 3.1428
#define AREAC(r) ((PI) * (r) * (r)) //Area of a Circle
#define PERIC(r) (2 * (PI) * (r)) // Perimeter of a Circle

#define AREAS(x) ((x) * (x)) //Area of a Square
#define PERIS(x) (4 * (x)) //Perimeter of a Square

#define PERIT(x, y, z) ((x) + (y) + (z)) //Perimeter of a Triangle
#define SPERI(a, b, c) (((a) + (b) + (c)) / 2) //Half of a Triangle's Perimeter
//Area of a Triangle
#define AREAT(a, b, c) sqrt(SPERI(a, b, c)*\
                        (SPERI(a, b, c) - (a))*\
                        (SPERI(a, b, c) - (b))*\
                        (SPERI(a, b, c) - (c)))

