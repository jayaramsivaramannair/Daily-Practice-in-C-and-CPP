/*

MULTI-DIMENSIONAL ARRAY - TRANSPOSE

Write a program to obtain the transpose of 3 x 3 matrix

Problem Source: 101 C Programming Challenges - Challenge 69
*/

#include <stdio.h>
#define ROW 3
#define COLUMN 3

void printarray(int matrix[ROW][COLUMN]);
void transposearray(int matrix1[ROW][COLUMN], int matrix2[ROW][COLUMN]);

int main(int argc, char* argv[])
{
    int matrix1[ROW][COLUMN], matrix2[ROW][COLUMN];

    printf("Enter array elements: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Before Transposing the matrix: \n");
    printarray(matrix1);
    transposearray(matrix1, matrix2);
    printf("After Transposing the matrix: \n");
    printarray(matrix2);

    return 0;
}

void printarray(int matrix[ROW][COLUMN])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposearray(int matrix1[ROW][COLUMN], int matrix2[ROW][COLUMN])
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            matrix2[i][j] = matrix1[j][i];
        }
    }
}

