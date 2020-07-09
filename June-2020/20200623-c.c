/*
Write a program to perform a LINEAR SEARCH on an array of 10 integers

Problem Source: 101 C Programming Challenges - Challenge 62
*/

#include <stdio.h>
#define SIZE 10

int main(int argc, char* argv[])
{
    int num[SIZE] = {11,2,9,13,57,25,17,1,90,3};
    int element, i;

    printf("Enter number to search: ");
    scanf("%d", &element);

    for (i = 0; i < SIZE; i++)
    {
        if(num[i] == element)
            break;
    }

    if (i == 10)
    {
        printf("Number is not present in the array\n");
    } else {
        printf("The number is at position %d in the array\n", i);
    }



    return 0;
}