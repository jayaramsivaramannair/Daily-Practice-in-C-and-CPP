/*
Consider a currency system in which there are notes of 6 denominations namely, 
$1, $5, $10, $20, $50, $100.
If an amount is entered through the keyboard, write a program to compute the smallest number of
notes that will combine to give the entered amount. 

Problem Source: 101 C Programming Challenges - Challenge 06
*/


#include <stdio.h>

int main(int argc, char* argv[])
{
    int amount;
    int hundreds, fifties, twenties, tens, fives, ones;
    int totalnotes;

    printf("Enter an amount without decimals: \n");
    scanf("%d", &amount);

    
    hundreds = amount / 100;
    amount = amount % 100;

    fifties = amount / 50;
    amount = amount % 50;

    twenties = amount / 20;
    amount = amount % 20;

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount / 1;
    amount = amount % 1;

    totalnotes = hundreds + fifties + twenties + tens + fives + ones;

    printf("Number of Hundreds: %d\n", hundreds);
    printf("Number of Fifties: %d\n", fifties);
    printf("Number of Twenties: %d\n", twenties);
    printf("Number of Tens: %d\n", tens);
    printf("Number of Fives: %d\n", fives);
    printf("Number of Ones: %d\n", ones);
    printf("Smallest number of notes is: %d\n", totalnotes);


    return 0;
}