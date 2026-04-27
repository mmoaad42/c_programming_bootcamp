#include <stdio.h>
int main()
{
	int	i;
	i = 0;
	int	sum;
	sum = 0;
	int	arr[] = {5, 7, 3, 8};
	int size = sizeof(arr) / sizeof(arr[0]);	//more generally, if you want it to work with any array size
	while (i < size) 
	{	// (i < 5)
		sum += *(arr + i);
		i++;
	}
	printf("sum is : %d\n", sum);
	return 0;
}

