/*
Write a program to reverse the contents of a 1D array

Problem Source: 101 C Programming Challenges - Challenge 66
*/

#include <stdio.h>
#define SIZE 11

void reversearray(int *arr, int size);
void printarray(int *arr, int size);

int main(int argc, char* argv[])
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11};
    printf("Array contents before reversal: ");
    printarray(arr, SIZE);
    reversearray(arr, SIZE);
    printf("Array contents after reversal: ");
    printarray(arr, SIZE);

    return 0;
}

void reversearray(int *arr, int size)
{
    int temp, begin, end;
    begin = 0;
    end = size - 1;
    while (begin <= end)
    {
        temp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = temp;

        begin++;
        end--;
    }
}

void printarray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}