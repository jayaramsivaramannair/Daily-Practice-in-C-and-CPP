/*
Write a program to generate and print all possible combinations of the characters present
in a given string.

Problem Source: 101 C Programming Challenges - Challenge 84
*/

#include <stdio.h>
#include <string.h>

void permute(char *str, int beg, int end);
void swap(char *src, char *tgt);

int main(int argc, char* argv[])
{
    char str[] = "JOKE";
    int n;

    n = strlen(str);
    permute(str, 0, n - 1);

    return 0;
}

void permute(char *str, int beg, int end)
{
    int i;

    if(beg == end)
    {
        printf("%s\n", str);
        return;
    } else {
        for(i = beg; i <= end; i++)
        {
            swap(str + beg, str + i);
            permute(str, beg + 1, end);
            swap(str + beg, str + i);
        }
    }
}

void swap(char *src, char *tgt)
{
    char ch;
    ch = *src;
    *src = *tgt;
    *tgt = ch;
}