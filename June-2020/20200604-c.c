/*
The weight of a commodity is input through the keyboard.
Write a program to convert and print this weight in grams, quintals, metric tons and pounds

Problem Source: 101 C Programming Challenges - Challenge 04
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    double kgs, gms, qtls, pnds, metric_tons;
    char code;

    printf("Enter the weight in kgs: \n");
    scanf("%lf", &kgs);

    printf("Equivalent weight in grams: %f\n", gms = kgs * 1000);
    printf("Equivalent weight in pounds: %f\n", pnds = kgs * 2.205);
    printf("Equivalent weight in quintals: %f\n", qtls = kgs / 100.0);
    printf("Equivalent weight in metric tons: %f\n", metric_tons = kgs / 1000.0);


    return 0;
}