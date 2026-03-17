/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/

#include <stdio.h>
#include <string.h>

// 1. Create a struct Person
typedef struct
{
    char *name;
    char *phone;
}
person;

int main(void)
{
    // 2. Create an array of persons (Size changed to 3 to include you)
    person people[3];

    people[0].name = "Carter";
    people[0].phone = "+1-617-495-1000";

    people[1].name = "David";
    people[1].phone = "+1-949-468-2750";

    // Adding you to the list
    people[2].name = "polat";
    people[2].phone = "+26262626";

    // 3. Ask the user for a name
    char name[50];
    printf("Name: ");
    scanf("%s", name);

    // 4. Search for the name (Looping through 3 people now)
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].phone);
            return 0;
        }
    }

    // 5. If not found
    printf("Not found\n");
    return 1;
}
