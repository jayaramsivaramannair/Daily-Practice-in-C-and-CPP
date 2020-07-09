/*
Write a function to compute the distance between two points and use it
to develop another function that will compute the area of the triangle whose
vertices are A(x1, y1), B(x2, y2) and C(x3, y3), if the triangle is a valid
triangle.

Problem Source: 101 C Programming Challenges - Challenge 44
*/

#include <stdio.h>
#include <math.h>

float distance(int, int, int, int);
int isTriangleValid(float, float, float);
float areaOfTriangle(float s1, float s2, float s3);


int main(int argc, char* argv[])
{
    int x1, y1, x2, y2, x3, y3;
    float s1, s2, s3, area;
    int isValid = 0;

    printf("Enter the coordinates of 3 vertices of the triangle: \n");
    printf("First Vertex(x, y):\n");
    scanf("%d %d", &x1, &y1);

    printf("Second Vertex(x, y):\n");
    scanf("%d %d", &x2, &y2);

    printf("Third Vertex(x, y):\n");
    scanf("%d %d", &x3, &y3);

    s1 = distance(x1, y1, x2, y2);
    s2 = distance(x2, y2, x3, y3);
    s3 = distance(x3, y3, x1, y1);

    printf("Length of first side = %f\n", s1);
    printf("Length of second side = %f\n", s2);
    printf("Length of third side = %f\n", s3);

    isValid = isTriangleValid(s1, s2, s3);

    if(isValid)
    {
        area = areaOfTriangle(s1,s2,s3);
        printf("Area: %f\n", area);
    } else {
        printf("The three sides do not form a triangle.\n");
    }
    
    return 0;
}

int isTriangleValid(float s1, float s2, float s3)
{
    if (s1 <= 0 || s2 <= 0 || s3 <= 0)
    {
        return 0;
    } else if ((s1 + s2 <= s3) || (s2 + s3 <= s1) || (s1 + s3 <= s2))
    {
        return 0;
    } else {
        return 1;
    }
}

float areaOfTriangle(float s1, float s2, float s3)
{
    float s;

    s = (s1 + s2 + s3) / 2.0;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

float distance(int x1, int y1, int x2, int y2)
{
    float sq;

    sq = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(sq);
}