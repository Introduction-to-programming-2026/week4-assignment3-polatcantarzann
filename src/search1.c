/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. Create an array of strings (names)
    char *names[] = {"Carter", "David", "Polat", "Alice"};
    int n = 4; // Number of elements

    // 2. Ask the user for a name
    char name[50];
    printf("Name: ");
    scanf("%s", name);

    // 3. Search the array
    for (int i = 0; i < n; i++)
    {
        // 4. Use strcmp() to compare strings
        if (strcmp(names[i], name) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    // 5. If not found
    printf("Not found\n");
    return 1;
}