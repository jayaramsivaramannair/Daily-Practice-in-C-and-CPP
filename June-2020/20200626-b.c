/*
MULTI-DIMENSIONAL ARRAYS

Write a program to obtain product of two 3 x 3 matrices

Problem Source: 101 C Programming Challenges - Challenge 71
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

void create(int matrix[ROWS][COLUMNS]);
void display(int matrix[ROWS][COLUMNS]);
void matrixmult(int matrix1[ROWS][COLUMNS], int matrix2[ROWS][COLUMNS],
int matrix3[ROWS][COLUMNS]);

int main(int argc, char* argv[])
{
    int matrix1[ROWS][COLUMNS], matrix2[ROWS][COLUMNS],
    matrix3[ROWS][COLUMNS];

    printf("Enter elements for first array: \n\n");
    create(matrix1);
    printf("\n");
    printf("Enter elements for second array:\n\n");
    create(matrix2);
    printf("\n");
    printf("First Array: \n");
    display(matrix1);
    printf("Second Array: \n");
    display(matrix2);
    printf("After Multiplication: \n");
    matrixmult(matrix1, matrix2, matrix3);
    display(matrix3);

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

void display(int matrix[ROWS][COLUMNS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixmult(int matrix1[ROWS][COLUMNS], int matrix2[ROWS][COLUMNS],
int matrix3[ROWS][COLUMNS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            matrix3[i][j] = 0;
            for(int k = 0; k < COLUMNS; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}