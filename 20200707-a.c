/*
Write a program that receives an integer (less than or equal to nine digits in length)
and prints out the numbers in words. For example, if the number input is 12342, then 
the output should be Twelve Thousand Three Hundred Forty Two.

Problem Source: 101 C Programming Challenges - Challenge 86
*/

#include <stdio.h>

void convert(long n, char []);

char *one[] = {"", "One", "Two", "Three", "Four", "Five",
                "Six", "Seven", "Eight", " Nine", "Ten",
                "Eleven", "Twelve", "Thirteen", "Fourteen",
                "Fifteen", "Sixteen", "Seventeen", "Eighteen"
                , "Nineteen"};

char *ten[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                "Sixty", "Seventy", "Eighty", "Ninety"};

int main(int argc, char *argv[])
{
    long num;

    printf("\nEnter any Number(max 9 digits): ");
    scanf("%ld", &num);

    if (num <= 0)
    {
        printf("No negative numbers please...\n");
    } else {
        convert((num / 1000000000), "Billion");
        convert(((num / 1000000) % 100), "Million");
        convert(((num / 1000) % 100), "Thousand");
        convert(((num / 100) % 10), "Hundred");
        convert((num % 100), " ");
    }
    printf("\n");

    return 0;
}

void convert(long n, char *s)
{
    if (n > 19)
    {
        printf("%s %s", ten[n / 10], one[n % 10]);
    } else {
        printf("%s", one[n]);
    }

    if(n)
    {
        printf("%s ", s);
    }
}