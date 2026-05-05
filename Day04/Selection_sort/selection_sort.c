void	selection_sort(int *arr, int size)
{
	int	i;
	int	temp;
	int	j;
	int	min;
	i = 0;
	while (i < size - 1 )
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (arr[min] > arr[j])
				min = j;
			j++;
		}

			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
			i++;
	}
}


#include<stdio.h>
void	selection_sort(int *arr, int size);
int main ()
{
	int arr[] = {2, 1, 5, 4, 8};
	int size = 5;
	int i = 0;
	selection_sort(arr, size);
	while (i < size )
	{
		printf("after sorting is %d\n", arr[i]);
		i++;
	}
}

