/*
Write a function that receives 5 integers and returns the sum, average and 
standard deviation of these numbers. Call this function from main()
and print the results in main().

Problem Source: 101 C Programming Challenges - Challenge 43.
*/

#include <stdio.h>
#include <math.h>

void sum_avg_sd(float a, float b, float c, float d, float e, float *sum, float* avg, float *sd);

int main(int argc, char* argv[])
{
    float a, b, c, d, e, sum, avg, sd;

    printf("Enter 5 numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    sum_avg_sd(a, b, c, d, e, &sum, &avg, &sd);

    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);
    printf("Standard deviation = %f\n", sd);

    return 0;
}

void sum_avg_sd(float a, float b, float c, float d, float e, float *sum, float* avg, float *sd)
{
    float variance;

    *sum = a + b + c + d + e;
    *avg = *sum / 5;

    variance = ((*avg - a) * (*avg - a) + (*avg - b) * (*avg - b) + (*avg - c) * (*avg - c)
    + (*avg - d) * (*avg - d) + (*avg - e) * (*avg - e)) / 5;

    *sd = sqrt(variance);

}