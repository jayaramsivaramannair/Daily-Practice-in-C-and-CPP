/*
In Digital World colors are specified in Red-Green-Blue(RGB) format, with values of
R, G, B varying on an integer scale from 0 to 255. In print publishing the codes
are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and 
K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color 
to CMYK color as per the following formulae:

White = Max(Red/255, Green/255, Blue/255)

Cyan = (White - (Red/255)) / White

Magenta = (White - (Green/255)) / White

Yellow = (White - (White/255)) / White

Black = 1 - White

Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.

Problem Source: 101 C Programming Challenges - Challenge 19
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    float red = 0.0, green = 0.0, blue = 0.0;
    float white = 0.0, cyan = 0.0, magenta = 0.0, yellow = 0.0, black = 0.0;
    printf("Enter Red, Green, Blue values (0 to 255):\n");
    scanf("%f %f %f", &red, &green, &blue);

    if ((red < 0 || red > 255) || (green < 0 || green > 255)
    || (blue < 0 || blue > 255))
    {
        printf("Invalid RGB values\n");
        return 0;
    }

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = 0.0;
        magenta = 0.0;
        yellow = 0.0;
        black = 1.0;

    } else {

        white = red/255.0;

        if ((green/255.0) > white)
        {
            white = green/255.0;
        }

        if ((blue/255.0) > white)
        {
            white = blue/255.0;
        }
        cyan = (white - (red/255.0)) / white;
        magenta = (white - (green/255.0)) / white;
        yellow = (white - (blue/255.0)) / white;
        black = 1- white;
    }

    printf("CMYK = %f %f %f %f\n", cyan, magenta, yellow, black);

    return 0;
}

