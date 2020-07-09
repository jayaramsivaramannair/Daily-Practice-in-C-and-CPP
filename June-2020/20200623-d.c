/*
Write a program to perform a BINARY SEARCH on an array of 10 integers


Problem Source: 101 C Programming Challenges - Challenge 63
*/

// This array requires before-hand that the array be sorted
// This method of search cannot be applied to the unsorted array
#include <stdio.h>
#define MAX 10
#define FOUND 1
#define NOTFOUND 0

int main(int argc, char* argv[])
{
    int arr[MAX] = {1,2,3,9,11,13,17,25,57,90};
    int mid, lower, upper, num, flag;

    lower = 0;
    upper = MAX - 1;
    flag = NOTFOUND;

    printf("Enter number to search: ");
    scanf("%d", &num);

    mid = (lower + upper) / 2;

    while (lower <= upper)
    {
        if(arr[mid] == num)
        {
            printf("Number is at position %d in the array\n", mid);
            flag = FOUND;
            break;
        }

        if(arr[mid] > num)
        {
            upper = mid - 1;
        } else {
            lower = mid + 1;
        }

        mid = (lower + upper) / 2;
    }

    if (flag == NOTFOUND)
    {
        printf("Element is not present in the array\n");
    }

    return 0;
}