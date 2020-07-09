/*
Write a program to reverse the strings stored in the following 2D array of characters:

char s[][100] = {
                    "To err is human...",
                    "But to really mess things up...",
                    "One needs to know C!!"     
                };

Problem Source: 101 C Programming Challenges - Challenge 78

*/

#include <stdio.h>
#include <string.h>

void strreverse(char *);

int main(int argc, char* argv[])
{
    char s[][100] = {
                    "To err is human",
                    "But to really mess things up",
                    "One needs to know C"     
                };
    int i;

    for (i = 0; i < 3; i++)
    {
        strreverse(s[i]);
        printf("%s\n", s[i]);
    }

    return 0;
}

void strreverse(char *str)
{
    int begin, end;
    begin = 0;
    end = strlen(str) - 1;

    while (begin < end)
    {
        char ch = str[begin];
        str[begin] = str[end];
        str[end] = ch;
        begin++;
        end--;
    }
}
