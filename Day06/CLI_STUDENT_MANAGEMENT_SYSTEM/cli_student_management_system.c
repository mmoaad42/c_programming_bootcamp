#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int age;
	int grade;
};

int main()
{
	struct student *s;   
	struct student temp;
	int i;
	int n;
	int j;
	char search[50];

	printf("How many students are there : ");
	scanf("%d", &n);

	s = malloc(sizeof(struct student) * n);  
	if (s == NULL)
		return 1;

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

	printf("\n--- The students are ---\n");

	i = 0;
	while (i < n)
	{
		printf("%s | Age: %d | Grade: %d\n", s[i].name, s[i].age, s[i].grade);
		i++;
	}

	printf("\n Search name: ");
	scanf("%s", search);

	int found_index = -1;
	i = 0;
	while (i < n)
	{
		if (strcmp(s[i].name, search) == 0)
		{
			printf("Found: %s |Age: %d | Grade: %d\n", s[i].name, s[i].age, s[i].grade);
			found_index = i;
			break;
		}
		i++;
	}

	if (found_index == -1)
	{
		printf("The student you're looking for is not here !\n");
	}
	else
	{
		printf("New age: ");
		scanf("%d", &s[found_index].age);

		printf("New grade: ");
		scanf("%d", &s[found_index].grade);
	}

	found_index = -1;

	printf("\nEnter name to delete: ");
	scanf("%s", search);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].name, search) == 0)
		{
			found_index = i;
			break;
		}
	}

	if (found_index == -1)
	{
		printf("Student not found!\n");
	}
	else
	{
		for (int i = found_index; i < n - 1; i++)
		{
			s[i] = s[i + 1];
		}
		n--;

		printf("Student deleted successfully!\n");
	}

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

	printf("--- Sorted by Grade ---\n");

	i = 0;
	while (i < n)
	{
		printf("%s | Grade: %d\n", s[i].name, s[i].grade);
		i++;
	}

	free(s); 

	return 0;
}
