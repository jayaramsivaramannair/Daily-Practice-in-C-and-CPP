/*
Twenty-five numbers are entered from the keyboard into an array. Write
a program to find the number of positives, negatives and zeros in the 
array.

Problem Source: 101 C Programming Challenges - Challenge 60
*/

#include <stdio.h>
#define MAX 25

int main(int argc, char* argv[])
{
    int arr[MAX];
    int positives = 0, negatives = 0, zeros = 0;

    printf("Enter 25 elements of array:\n");

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        if(arr[i] < 0)
        {
            negatives++;
        } else if(arr[i] == 0)
        {
            zeros++;
        } else
        {
            positives++;
        }
    }

    printf("Number of positives: %d\n", positives);
    printf("Number of negatives: %d\n", negatives);
    printf("Number of zeros: %d\n", zeros);

    return 0;
}