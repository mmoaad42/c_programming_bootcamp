 #include <stdio.h>

void	matrix_transpose(int *arr, int rows, int cols)
{
	int	i;
	int	j;
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%d ", arr[j * rows + i]);
				j++;
		}

		printf("\n");
		i++;

	}
}

int main()
{
int arr[] = {
    1, 2, 3,
    4, 5, 6
};
int cols = 3;
int rows = 2;

matrix_transpose(arr, rows, cols);
return 0;
}
