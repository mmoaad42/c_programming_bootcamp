#include <stdio.h>
#include <stdlib.h>
int main()
{
	int	size;
	size = 5;
	int	i;
	i = 0;
	int	*arr;
	arr = malloc(5 * sizeof(int));
	if (arr == NULL)
		return 1;
	while ( i < size)
	{
		arr[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
			i++;
	}
	free(arr);
	return 0;
}
