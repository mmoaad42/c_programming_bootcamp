#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    int grade;
};

int main()
{
    struct student s[100];
    struct student temp;

    int n;
    int i;
    int j;
    int top;
    char search[50];

    printf("How many students: ");
    scanf("%d", &n);

    // Input students
    i = 0;
    while (i < n)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Grade: ");
        scanf("%d", &s[i].grade);

        i++;
    }

    // Print all students
    printf("\n--- All Students ---\n");

    i = 0;
    while (i < n)
    {
        printf("%s | Age: %d | Grade: %d\n",
            s[i].name, s[i].age, s[i].grade);
        i++;
    }

    // Find top student
    top = 0;
    i = 1;

    while (i < n)
    {
        if (s[i].grade > s[top].grade)
            top = i;
        i++;
    }

    printf("\nTop Student: %s (%d)\n",
        s[top].name, s[top].grade);

    // Sort by grade
    i = 0;
    while (i < n - 1)
    {
        j = 0;
        while (j < n - i - 1)
        {
            if (s[j].grade < s[j + 1].grade)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    printf("\n--- Sorted By Grade ---\n");

    i = 0;
    while (i < n)
    {
        printf("%s | %d\n", s[i].name, s[i].grade);
        i++;
    }

    // Search by name
    printf("\nSearch name: ");
    scanf("%s", search);

    i = 0;
    while (i < n)
    {
        if (strcmp(s[i].name, search) == 0)
        {
            printf("Found: %s Age:%d Grade:%d\n",
                s[i].name, s[i].age, s[i].grade);
            return 0;
        }
        i++;
    }

    printf("student not found\n");

    return 0;
}
