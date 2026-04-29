void	bubble_sort(int *arr, int size)
{
	int	i;
	int	temp;
	int	pass;
	pass = 0;

	while (pass < size - 1)
	{
		i = 0;
		while(i < size - 1 - pass)
		{
	       		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
			i++;
		}
		pass++;
	}
}
/*#include <stdio.h>
#include<unistd.h>

void	bubble_sort(int *arr, int size);

int main()
{

	int arr[] = {2, 4, 1, 7, 3};
	int size = 5;
	int i = 0;
	while (i < size)
	{
	printf("before sorting %d\n", arr[i]);
	i++;
	}
	write(1, "\n\n", 2);
	
	i = 0;
	
	bubble_sort(arr, size);
	while (i < size)
	{
		printf("after sorting %d\n", arr[i]);
		i++;
	}
}*/
