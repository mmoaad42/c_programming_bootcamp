#include <stdio.h>
void	swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	move_zeros (int *arr, int size)
{
	int	i;
	int	j;
	i = 0;
	j = 0;
	while (i < size)
	{
		if (arr[i] != 0)
		{
			swap(&arr[i],&arr[j]);
			j++;
		}
		i++;
	}
}
int main()
{
	int arr[] = {0, 1, 0, 3, 12};
	int size = 5;
	int i = 0;

	move_zeros(arr, size);

	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return 0;
}
