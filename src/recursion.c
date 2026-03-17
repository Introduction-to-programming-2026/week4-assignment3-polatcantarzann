/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/

#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    // Ask for positive integer
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1);

    // Call recursive function
    draw(height);
}

void draw(int n)
{
    // Base case: If height is 0, stop
    if (n <= 0)
    {
        return;
    }

    // Draw a pyramid of height n - 1 (The recursive call)
    draw(n - 1);

    // Print the n-th row
    for (int j = 0; j < n; j++)
    {
        printf("#");
    }
    printf("\n");
}