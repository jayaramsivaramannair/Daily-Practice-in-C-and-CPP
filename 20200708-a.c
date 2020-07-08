/*
Write a program to sort birth dates of employees stored in an array of structures.

Problem Source : 101 C Programming Challenges - Challenge 87
*/

#include <stdio.h>
#define MAX 5

struct employee
{
    char emp_name[20];
    int month;
    int date;
    int year;
};

void sortdates(struct employee e[], int);
void printemployees(struct employee e[], int);
int compare(struct employee a, struct employee b);

int main(int argc, char* argv[])
{
    struct employee e[MAX] = 
    {
        {"John", 11, 19, 1992},
        {"Malcolm", 6, 24, 1991},
        {"Milton", 11, 22, 1993},
        {"Edward", 12, 12, 1992},
        {"Seema", 10, 14, 1992}
    };

    sortdates(e,MAX);
    printemployees(e,MAX);
    return 0;
}

int compare(struct employee a, struct employee b)
{
    if(a.year < b.year)
    {
        return 1;
    } else if (a.year > b.year)
    {
        return 0;
    } else 
    {
        if (a.month < b.month)
        {
            return 1;
        } else if (a.month > b.month)
        {
            return 0;
        } else {
            if(a.date < b.date)
            {
                return 1;
            } else if (a.date > b.date)
            {
                return 0;
            } else {
                return 0;
            }
        }
    }
}

void sortdates(struct employee e[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (compare(e[i], e[j]) == 1)
            {
                struct employee t = e[i];
                e[i] = e[j];
                e[j] = t;
            }
        }
    }
}

void printemployees(struct employee e[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%s %d.%d.%d\n", e[i].emp_name, e[i].month, e[i].date, e[i].year);
    }
}