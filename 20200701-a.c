/*
A Credit Card number is usually a 16-digit number. A valid Credit Card
number would satisfy a rule explained below with the help of a dummy Credit Card
number - 4567 1234 5678 9129. Start with the rightmost - 1 digit and multiply 
every other digit by 2.

4   5   6   7   1   2   3   4   5   6   7   8   9   1   2   9
Start with the rightmost - 1 digit of CC number and multiply every other digit by 2
8       12      2       6       10      14      18      4

Then subtract 9 from any number larger than 10. Thus, we get:
8       3       2       6       1       5       9       4

Add them all up to get 38.
Add all the other digits to get 42.

Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card number is valid. 

Write a program that receives a Credit Card number and checks using the above rule whether
the Credit Card Number is valid. 

Problem Source: 101 C Programming Challenges - Challenge 80
*/

#include <stdio.h>
#include <ctype.h>
#define NUMBER_LENGTH 16

int main(void)
{
    int credit_card[NUMBER_LENGTH];
    char ch;
    int sum = 0, i = 0, multiple = 0, digit;

    printf("Enter a 16 digit credit card number:\n");
    //Read in Credit Card Number
    while (ch != '\n')
    {
        scanf("%c", &ch);
        if (isdigit(ch) != 0) //If the entered character is a digit
        {
            credit_card[i] = ch - '0';
            i++;
        }
    }

    for(int j = NUMBER_LENGTH - 1; j >= 0; j--)
    {
        digit = credit_card[j];

        if(j % 2 == 0)
        {
            multiple = digit * 2;
            if (multiple >= 10)
            {
                digit = multiple - 9;
            } else {
                digit = multiple;
            }
        }
        sum = sum + digit;
    }

    if (sum % 10 == 0)
    {
        printf("Credit card number is valid\n");
    } else {
        printf("Credit card number is invalid\n");
    }

    return 0;
}