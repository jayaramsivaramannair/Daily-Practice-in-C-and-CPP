/*
Write a program to check whether the contents of two 1D arrays are same or not

Problem Source: 101 C Programming Challenges - Challenge 64
*/

#include <stdio.h>
#define EQUAL 1
#define NOTEQUAL 0

int compare(int *arr1, int sz1, int *arr2, int sz2);
int main(int argc, char* argv[])
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int arr3[] = {2,4,6,8};
    int arr4[] = {1,2,3,4,5};

    int result;

    result = compare(arr1, 5, arr2, 5);
    if (result == EQUAL)
    {
        printf("Arrays arr1 and arr2 are equal\n");
    } else {
        printf("Arrays arr1 and arr2 are NOT equal\n");
    }

    result = compare(arr1, 5, arr3, 4);
    if (result == EQUAL)
    {
        printf("Arrays arr1 and arr3 are equal\n");
    } else {
        printf("Arrays arr1 and arr3 are NOT equal\n");
    }

    result = compare(arr1, 5, arr4, 5);
    if (result == EQUAL)
    {
        printf("Arrays arr1 and arr4 are equal\n");
    } else {
        printf("Arrays arr1 and arr4 are NOT equal\n");
    }

    result = compare(arr2, 5, arr3, 4);
    if (result == EQUAL)
    {
        printf("Arrays arr2 and arr3 are equal\n");
    } else {
        printf("Arrays arr2 and arr3 are NOT equal\n");
    }

    return 0;
}

int compare(int *arr1, int sz1, int *arr2, int sz2)
{
    if (sz1 != sz2)
    {
        return NOTEQUAL;
    } else {
        for (int i = 0; i < sz1; i++)
        {
            if(arr1[i] != arr2[i])
            {
                return NOTEQUAL;
            }
        }
    }
    return EQUAL;
}