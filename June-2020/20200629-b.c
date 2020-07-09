/*
Write a program that extracts a string from the left, right or middle of a string

Problem Source: 101 C Programming Challenges - Challenge 75
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WRONG 0
#define CORRECT 1

char *getsub(char *, int, int);
char *leftsub(char *, int);
char *rightsub(char *, int);

int main(int argc, char* argv[])
{
    char str[] = "Four hundred thirty two";
    char *s;

    printf("String: %s\n", str);
    s = getsub(str, 13, 6);

    if (s != NULL)
    {
        printf("Substring: %s\n", s);
        free (s);
    }

    s = leftsub(str, 4);
    if (s != NULL)
    {
        printf("Left substring: %s\n", s);
        free(s);
    }

    s = rightsub(str, 3);
    if (s != NULL)
    {
        printf("Right substring: %s\n", s);
        free(s);
    }

    return 0;
}

char *getsub(char *str, int spos, int n) // parameter 'n' signifies no of characters for extraction
{
    int len, input, i;
    char *t;

    input = CORRECT;
    len = strlen(str);

    if (spos < 0 || spos >= len)
    {
        input = WRONG;
        printf("Starting index out of range\n");
    } else if (len <= 0)
    {
        input = WRONG;
        printf("Length of substring specified invalid\n");
    } else if (spos + n - 1 >= len)
    {
        input = WRONG;
        printf("Length out of range\n");
    } else {
        t = (char*) malloc(n + 1); // allocating memory before storing characters

        for (i = 0; i < n; i++)
        {
            t[i] = str[spos + i];
        }
        t[i] = '\0';
    }

    if (input == WRONG)
    {
        return NULL;
    } else {
        return t;
    }
}

char *leftsub(char *str, int n) // parameter 'n' signifies no of characters for extraction
{
    int len, input, i;
    char *t;

    input = CORRECT;

    len = strlen(str);

    if (n < 0 || n > len)
    {
        input = WRONG;
        printf("Length of left substring specified invalid\n");
    } else {
        t = (char *) malloc(n + 1);

        for (i = 0; i < n; i++)
        {
            t[i] = str[i];
        }
        t[i] = '\0';
    }

    if (input == WRONG)
    {
        return NULL;
    } else {
        return t;
    }
}

char *rightsub(char *str, int n)
{
    int len, input, i;
    char *t;

    len = strlen(str);
    input = CORRECT;

    if(n < 0 || n > len)
    {
        input = WRONG;
        printf("Length of right substring specified invalid.\n");
    } else {
        t = (char *) malloc(n + 1);
        for (i = 0; i < n; i++)
        {
            t[n - i - 1] = str[len - i - 1];
        }
        t[n] = '\0';
    }

    if (input == WRONG)
    {
        return NULL;
    } else {
        return t;
    }
}