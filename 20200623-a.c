/*
Write a program to implement a stack data structure. Stack is a LIFO(Last in First Out)
list in which addition and deletion takes places at the same end. 

Problem Source: 101 C Programming Challenges - Challenge 59
*/

#include <stdio.h>
#define MAX 10
#define TRUE 1
#define FALSE 0


void push(int num);
int pop();

int top = -1;
int arr[MAX];
int empty = TRUE;

int main(int argc, char* argv[])
{
    int n;

    push(11);
    push(23);
    push(-8);
    push(14);
    push(20);
    push(21);
    push(2);
    push(-3);
    push(4);
    push(12);
    push(5);
    push(101);

    n = pop();
    if (n == -1 && empty == TRUE)
    {
        printf("Stack is empty. Cannot pop\n");
    } else {
        printf("Popped Element: %d\n", n);
    }

    n = pop();
    if (n == -1 && empty == TRUE)
    {
        printf("Stack is empty. Cannot pop\n");
    } else {
        printf("Popped Element: %d\n", n);
    }

    n = pop();
    if (n == -1 && empty == TRUE)
    {
        printf("Stack is empty. Cannot pop\n");
    } else {
        printf("Popped Element: %d\n", n);
    }

    return 0;
}

void push(int num)
{
    if(top == MAX - 1) // Stack is already full
    {
        printf("Stack is full. Cannot push element.\n");
        return;
    }
    top++;
    arr[top] = num;
    empty = FALSE;
}

int pop()
{
    int num;
    if (top == -1)
    {
        empty = TRUE;
        return -1;
    }
    num = arr[top];
    top--;
    return num;
}