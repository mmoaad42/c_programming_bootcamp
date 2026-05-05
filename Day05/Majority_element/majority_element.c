#include <stdio.h>

int	majority_element(int *arr, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < size)
	{
		count = 0;
		j = 0;
		while (j < size)
		{
			if (arr[i] == arr[j])
				count++;
			j++;
		}
		if (count > size / 2)
			return (arr[i]);
		i++;
	}
	return (-1);
}

int	main()
{
	int	arr[] = {2, 2, 1, 2, 3, 2, 2};
	int	size;
	int	result;

	size = sizeof(arr) / sizeof(arr[0]);
	result = majority_element(arr, size);

	if (result != -1)
		printf("Majority element: %d\n", result);
	else
		printf("No majority element found\n");

	return (0);
}
