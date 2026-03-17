/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/

#include <stdio.h>

int main(void)
{
    // 1. Create an array of integers
    int numbers[] = {20, 50, 10, 5, 100, 1, 500};
    int n = 7; // Number of elements in the array

    // 2. Ask the user for a number
    int target;
    printf("Number: ");
    scanf("%d", &target);

    // 3. Search the array manually using a loop
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == target)
        {
            // 4. If found, print Found and exit
            printf("Found\n");
            return 0;
        }
    }

    // 4. If the loop finishes and nothing is found
    printf("Not found\n");
    return 1;
}