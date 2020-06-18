/*

TOWER OF HANOI : RECURSION PROBLEM

There are three pegs labeled A, B and C. Four disks are placed on peg A. The bottom-most
disk is largest, and disks go on decreasing in size with the topmost disk being smallest.
The objective of the game is to move the disks from peg A to peg C, using peg B as an
auxiliary peg. the rules of the game are as follows:

(a) Only one disk may be moved at a time and it must be the top disk on 
one of the pegs.

(b) A larger disk should never be placed on the top of a smaller disk. 

Write a program to print out the sequence in which the disks should be moved such 
that all disks on peg A are finally transferred to peg C. 

Problem Source: 101 C Programming Challenges - Challenge 45
*/

#include <stdio.h>

void move(int disks, char pegA, char pegB, char pegC);

int main(int argc, char* argv[])
{
    int n = 4;
    move(n, 'A', 'B', 'C');
    return 0;
}

void move(int disks, char pegA, char pegB, char pegC)
{
    if (disks == 1)
    {
        printf("Move from %c to %c\n", pegA, pegC);
    } else {
        move(disks-1, pegA, pegC, pegB); //Except the last disk, move everything to pegB
        move(1, pegA, pegB, pegC); // move the last disk from pegA to pegB
        move(disks-1, pegB, pegA, pegC); // move the remaining disks from pegB to pegC
    }
}