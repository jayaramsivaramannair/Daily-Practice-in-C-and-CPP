/*
Write a program to sort a set of names stored in an array in alphabetical order.

Problem Source: 101 C Programming Challenges - Challenge 83
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str[] = {"Rajesh", "Ashish", "Milind", "Pushkar", "Akash", "Seema", "Jayaram"};

    printf("Before Sorting: \n");
    for(int j = 0; j < 7; j++)
    {
        printf("%s ", str[j]); 
    }
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (strcmp(str[i], str[j]) >= 1)
            {
                char *temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("After Sorting: \n");
    for(int j = 0; j < 7; j++)
    {
        printf("%s ", str[j]); 
    }
    printf("\n");

    return 0;
}