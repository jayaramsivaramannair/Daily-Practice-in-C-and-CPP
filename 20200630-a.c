/*
Write a program to delete all vowels from a sentence. Assume that the sentence is
not more than 80 characters long.

Problem Source: 101 C Programming Challenges - Challenge 77
*/

#include <stdio.h>

int main(int argc, char* argv[])
{

    char sent[80], ch, sent1[80];
    char *s, *t;
    int i = 0;
    printf("Enter a sentence not more than 80 characters long: \n");

    while (ch != '\n')
    {
        scanf("%c", &ch);
        sent[i] = ch;
        i++;
    }
    sent[i] = '\0';
    s = sent;
    t = sent1;

    while(*s != '\0')
    {
        switch(*s)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                s++; //If the character is a vowel then increment the pointer
                break;
            default:
                *t = *s; // Characters other than vowel must be stored in another array
                s++;
                t++;
        }
    }
    *t = '\0';

    printf("Sentence after removing all vowels:\n%s\n", sent1);
    return 0;
}