/*

In boxing the weight class of a boxer is decided as per the following table.
Write a program that receives weight as input and prints out the boxer's
weight class. 

BOXER CLASS                 WEIGHT IN POUNDS
--------------------------------------------

Flyweight                           < 115
Bantamweight                    115 - 121
Featherweight                   122 - 153
Middleweight                    154 - 189
Heavyweight                        >= 190

Problem Source: 101 C Programming Challenges - Challenge 16

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    float weight;
    printf("Enter boxer's weight: \n");
    scanf("%f", &weight);

    if (weight <= 0)
    {
        printf("Invalid Input\n");
    } else if (weight > 0 && weight < 115)
    {
        printf("Flyweight\n");
    } else if (weight >= 115 && weight <= 121)
    {
        printf("Bantamweight\n");
    } else if (weight >= 122 && weight <= 153)
    {
        printf("Featherweight\n");
    } else if (weight >= 154 && weight <= 189)
    {
        printf("Middleweight\n");
    } else {
        printf("Heavyweight\n");
    }


    return 0;
}