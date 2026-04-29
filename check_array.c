#include <stdio.h>
int	is_sorted(int *arr, int size)
{
	int	i;
	i = 0;
		while(i < size - 1)
		{
			if (arr[i] > arr[i + 1])

			return 0;
		i++;
		}
	return 1;
}
int main()
{
	int arr[] = {3, 6, 3, 8};
	int size = 4;
	if (is_sorted(arr, size))
		printf("this array is sorted \n");
	else
		printf("this array is not sorted \n");
}



