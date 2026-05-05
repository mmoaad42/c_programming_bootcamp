#include <stdio.h>
void	two_sum (int *arr, int size, int target)
{
	int	i;
	int	j;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] + arr[j] == target)
			{
				printf("found at indexes %d and %d\n", i, j);
				return ;
			}
			j++;
		}
		i++;
	}
	printf("nothing found here, dude!\n");

}
int main()
{
	int arr[] = {2, 3, 5, 4};
	int size = 4;
	two_sum(arr, size, 11);
}
