/*
MULTI-DIMENSIONAL ARRAYS

Given a 2D array, write a program to visit all its elements in a spiral fashion,
for example, for the array given below

{1,2,3,4}
{5,6,7,8}
{9,10,11,12}
{13,14,15,16}

The elements should be visited in the order:

1 2 3 4  8 12 16 15 14 13 9 5 6 7 11 10

Problem Source: 101 C Programming Challenges - Challenge 72
*/

#include <stdio.h>
#define ROWS 4
#define COLUMNS 4

void create(int matrix[ROWS][COLUMNS]);

int main(int argc, char* argv[])
{
    int matrix1[ROWS][COLUMNS];
    int i;
    int toprow, bottomrow, leftcol, rightcol;

    toprow = 0;
    bottomrow = ROWS -1;
    leftcol = 0;
    rightcol = COLUMNS - 1;

    create(matrix1);

    while(toprow <= bottomrow && leftcol <= rightcol)
    {
        for (i = leftcol; i <= rightcol; i++)
        {
            printf("%d ", matrix1[toprow][i]);
        }
        toprow++;

        for(i = toprow; i <= bottomrow; i++)
        {
            printf("%d ", matrix1[i][rightcol]);
        }
        rightcol--;

        for(i = rightcol; i >= leftcol; i--)
        {
            printf("%d ", matrix1[bottomrow][i]);
        }
        bottomrow--;

        for(i = bottomrow; i >= toprow; i--)
        {
            printf("%d ", matrix1[i][leftcol]);
        }
        leftcol++;
    }
    printf("\n");

    return 0;
}

void create(int matrix[ROWS][COLUMNS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix[i][j]);
        }
    }
}