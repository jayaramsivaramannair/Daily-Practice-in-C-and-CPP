/*
SIEVE OF ERATOSTHENES:

Implement in a program the following procedure to generate prime numbers from 1 to 100.
This procedure is called sieve of Eratosthenes

Step 1 - Fill an array num[100] with numbers from 1 to 100
Step 2 - Starting with the second entry in the array, set all its multiples to zero
Step 3 - Proceed to the next non-zero element and set all its multiples to zero
Step 4 - Repeat Step 3 till you have set up the multiples of all the non-zero elements
to zero
Step 5 - At the conclusion of Step 4, all the non-zero entries left in the array would
be prime numbers, so print out these numbers.

Problem Source: 101 C Programming Challenges - Challenge 68
*/

#include <stdio.h>
#define SIZE 150

void fillarray(int *arr, int size);
void printnonzero(int *arr, int size);

int main(int argc, char* argv[])
{
    int arr[SIZE];
    fillarray(arr, SIZE);
    printf("Prime numbers between 1 & %d are: \n", SIZE);

    for (int i = 1; i < SIZE; i++)
    {
        if(arr[i] != 0)
        {
            int k = arr[i] * 2 - 1;
            int step = arr[i];

            for (int j = k; j < SIZE; j = j + step)
            {
                arr[j] = 0;
            }
        }
    }
   
    printnonzero(arr, SIZE);
}

void fillarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

void printnonzero(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
       if (arr[i] != 0)
       {
           printf("%d ", arr[i]);
       }
    }
    printf("\n");
}