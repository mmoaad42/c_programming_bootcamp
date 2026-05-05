int	longest_increasing_sequence(int *arr, int size)
{
	int	i;
	int	current;
	int	max;
	i = 0;
	current = 1;
	max = 1;
	while (i < size - 1)
	{
		if (arr[i] < arr[i + 1])
			current++;
		else
		       	current = 1;
		if (current > max)
			max = current;
		i++;
	}
	return max;
}
#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 6, 2, 9, 12, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("the longest sequence is%d\n ", longest_increasing_sequence(arr, size));
	return 0;
}
