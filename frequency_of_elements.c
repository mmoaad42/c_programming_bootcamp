#include <stdio.h>

void	frequency_of_elements(int *arr, int size)
{
	int i = 0;  
	int j;
	int count;
	
	while (i < size)
	{
		j = 0;
		count = 0;
		
		int already_counted = 0;
		int k = 0;
		while (k < i)
		{
			if (arr[k] == arr[i])
			{
				already_counted = 1;
				break;
			}
			k++;
		}
		
		if (!already_counted)  
		{
			while (j < size)
			{
				if (arr[i] == arr[j])
					count++;
				j++;  			}
			printf("%d appeared %d times\n", arr[i], count); 
		}
		i++; 
	}
}

int main()
{
	int arr[] = {1, 2, 2, 2, 3, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	frequency_of_elements(arr, size);
}
