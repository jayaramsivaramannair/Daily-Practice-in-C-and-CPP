/*
If five numbers are received from the keyboard, write a function that would calculate
their sum, product and average. Print these results in main().

Problem Source: 101 C Programming Challenges - Challenge 41
*/

#include <stdio.h>

void sum_prod_avg(int, int, int, int, int, int*, int*, int*);

int main(int argc, char* argv[])
{
    int n1, n2, n3, n4, n5, sum, prod, avg;

    printf("Enter 5 positive integers:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    sum_prod_avg(n1, n2, n3, n4, n5, &sum, &prod, &avg);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", prod);
    printf("Average = %d\n", avg);

    return 0;
}

void sum_prod_avg(int n1, int n2, int n3, int n4, int n5, int *sum, int *prod, int *avg)
{
    *sum = n1 + n2 + n3 + n4 + n5;
    *prod = n1 * n2 * n3 * n4 * n5;
    *avg = *sum / 5;
}