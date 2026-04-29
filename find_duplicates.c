#include <stdio.h>
void	find_duplicate(int *arr, int size)
{
	int	i;
	int	j;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				printf("duplicate found is %d\n", arr[i]);
				return;
			}
			j++;
		}
		i++;
	}

	printf("no dup found\n");
}
int main()
{
	int arr[] = {1, 2, 3, 2, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	find_duplicate(arr, size);
	return (0);
}
