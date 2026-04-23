
int	find_missing (int *arr, int size)
{
	int	i;
	i = 0;
	int	sum_arr;
	sum_arr = 0;
	int	N;
	int	sum;
	int	missing;
	
	
		N = size + 1;
		sum = N * (N + 1) / 2;
		while (i < size)
		{
		sum_arr += arr[i];
		i++;
		}
		missing = sum - sum_arr;
		return missing;
}
/*#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 5};
    int size = 4;

    printf("Missing number: %d\n", find_missing(arr, size));
}*/
