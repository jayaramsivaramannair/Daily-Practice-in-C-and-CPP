/*
Write a program to implement the following functions:

strlen: Finds the length of the string

strcpy: Copies contents of one string to another string

strcat: Appends one string at the end of another string

strcmp: Compares two strings to find whether they are identical or not

Problem Source: 101 C Programming Challenges - Challenge 74
*/

#include <stdio.h>

int xstrlen(char *);
void xstrcpy(char *t, char *s);
void xstrcat(char *t, char *s);
int xstrcmp(char *s, char *t);

int main(int argc, char* argv[])
{
    char s1[] = "NewYork";
    char s2[] = "Chicago";
    int len;

    printf("String s1: %s\n", s1);
    len = xstrlen(s1);
    char s3[20];
    printf("length of the string s1: %d\n", len);
    printf("String s2: %s\n", s2);
    xstrcpy(s3, s1);
    printf("String s3 after copying s1 to s3: %s\n", s3);
    xstrcat(s3, s2);
    printf("String s3 after concatenation: %s\n", s3);

    if (xstrcmp(s1, s2) == 0)
    {
        printf("The strings s1 and s2 are similar\n");
    } else {
        printf("The strings s1 and s2 are not similar\n");
    }

    return 0;
}

int xstrlen(char *s)
{
    int i = 0;

    while (*s)
    {
        s++;
        i++;
    }
    return i;
}

void xstrcpy(char *t, char *s)
{
    while(*s)
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}

void xstrcat(char *t, char *s)
{
    while(*t)
    {
        t++;
    }

    while(*s)
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}

int xstrcmp(char *s, char *t)
{
    while (*s == *t)
    {
        if (*s == '\0')
            break;
        t++;
        s++;
    }
    return (*s - *t);
}