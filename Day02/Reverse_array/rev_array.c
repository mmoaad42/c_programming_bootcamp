void	rev_arr(int *arr, int size)
{
	int	i;
	int	j;
	int temp;
	i = 0;
	j = size - 1;
	while (i < j )
	{
		temp = arr[i];		// temp = *(arr + i);
		arr[i] = arr[j];	//*(arr + i) = *(arr + j);
		arr[j] = temp;		//*(arr + j) = temp;
		j--;
		i++;
	}
}


/*#include <stdio.h>

void	rev_arr(int *arr, int size);

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	printf("Before reverse:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	rev_arr(arr, size);

	printf("After reverse:\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
