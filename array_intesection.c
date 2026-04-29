#include <stdio.h>
void	array_intersection(int *a, int size_a, int *b, int size_b)
{
	int	i;
	int	j;
	i = 0;
	while (i < size_a )
	{
		j = 0;
		while (j < size_b)
		{
			if (a[i] == b[j])
			{
				printf("%d\n", a[i]);
				break;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int a[] = {1, 3, 5, 7};
	int size_a = sizeof(a) / sizeof(a[0]);
	int b[] = {2, 3, 4, 7};
	int size_b = sizeof(b) / sizeof(b[0]);
	array_intersection(a, size_a, b, size_b);
}
