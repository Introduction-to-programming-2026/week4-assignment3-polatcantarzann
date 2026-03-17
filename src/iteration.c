/*
WEEK 1 — TASK 1 (Iteration)

Goal:
Practice loops and input validation.

Task:
1. Ask the user for a positive integer n.
2. If n < 1, ask again until valid.
3. Print a half-pyramid using # symbols.

Example:
Input: 4

Output:
#
##
###
####

Rules:
- You must use loops (for or while).
- No recursion allowed.
- Output must match exactly.
*/

#include <stdio.h>

int main(void)
{
    int n;

    // 1. Step: Ask the user for a positive integer n
    // If n < 1, ask again until valid
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // 2. Step: Print a half-pyramid using # symbols
    // The outer loop handles rows
    for (int i = 1; i <= n; i++)
    {
        // The inner loop handles columns (# symbols)
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}