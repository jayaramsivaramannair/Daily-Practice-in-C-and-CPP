/*

Write a program that rotates the contents of a 1D array of integers by desired
numbers of places.

Problem Source: 101 C Programming Challenges - Challenge 65

*/

#include <stdio.h>
#define SIZE 10
#define LEFT_ROTATE 7 //Number of places that contents need to be rotated inside the array

void printarray(int *arr, int size);
void rotatearray(int *arr, int rotate, int size);

int main(int argc, char* argv[])
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    printf("Array contents before rotation: ");
    printarray(arr, SIZE);  
    rotatearray(arr, LEFT_ROTATE, SIZE);
    printf("Array contents after rotation by %d places: ", LEFT_ROTATE);
    printarray(arr, SIZE);

    return 0;
}

void printarray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotatearray(int *arr, int rotate, int size)
{
    int j, first;
    for (int i = 0; i < rotate; i++)
    {
        first = arr[0]; // On each iteration, store the first element in 'first variable'
        for(j = 0; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[j - 1] = first;
    }
}
