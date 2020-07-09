/*
Write a program that counts vowels, consonants and words present in a sentence that is
received from the keyboard.

Problem Source: 101 C Programming Challenges - Challenge 76
*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    char str[80], ch;
    int vows, consos, words, i;

    char *s;

    vows = consos = words = i = 0;

    printf("Enter a sentence not more than 80 characters long: \n");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    s = str;

    while(*s != '\0')
    {
        if(isalpha(*s))
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
                    vows++;
                    break;
                default:
                    consos++;
            }

            s++;
        } else if (isspace(*s))
        {
            words++;
            while (isspace(*s))
            {
                s++;
            }
        } else {
            s++;
        }
    }

    printf("Vowels = %d\n", vows);
    printf("Consonants = %d\n", consos);
    printf("Words = %d\n", words);
    return 0;
}