/*
To uniquely identify a book a 10-digit ISBN number is used. The ISBN number is considered
to be correct if the sum d1 + 2d2 + 3d3 + ... + 10d10 is a multiple of 11
(where di denots the ith digit from the right). The digits d2 to d9 can take any value
from 0 to 9, whereas d1 can be any value from 0 to 10. The ISBN convention is to use the value
X to denote 10. Write a program that receives a 10-character ISBN number and reports whether
the ISBN number is correct or not.

Problem Source: 101 C Programming Challenges - Challenge 81
*/

#include <stdio.h>
#define CORRECT 1
#define WRONG 0
#define ISBN_LENGTH 10

int main(int argc, char* argv[])
{
    char str[ISBN_LENGTH + 1]; // Additional 1 for null character
    int sum, i, digit, input, weight;

    printf("Enter an ISBN number: \n");
    scanf("%s", str);

    sum = 0;
    input = CORRECT;

    weight = 10; //Starting digits in ISBN have the most weight and they subsequently decrease

    for (i = 0; i <= 8; i++)
    {
        if (str[i] >= '0' || str[i] <= '9')
        {
            digit = str[i] - '0';
            sum = sum + weight * digit;
            weight--;
        } else {
            input = WRONG;
            break;
        }
    }

    if (input == CORRECT)
    {
        if(str[9] >= '0' && str[9] <= '9')
        {
            digit = str[i] - '0';
            sum = sum + digit;
        } else if (str[9] == 'x' || str[9] == 'X')
        {
            digit = 10;
            sum = sum + digit;
        } else {
            input = WRONG;
        }
    }

    if(input == WRONG)
    {
        printf("Invalid Input\n");
    } else {
        if (sum % 11 == 0)
        {
            printf("ISBN number verified and found to be correct\n");
        } else {
            printf("Checksum error in ISBN number\n");
        }
    }
    return 0;
}