#include <stdio.h>

int sum_array(int *arr, int size)
{
	int i = 0;
	 if (size < 0)
		 return -1;
	 else if ( size == 0)
		 return 0;
	 else 
		 return (arr[0] + sum_array(arr + 1, size - 1));
}
int main(void)
{
	int arr[] = {2, 3, 5, 7};
	int size = 4;
	int sum = sum_array(arr, size);
	printf("the sum of this array is:  %d\n", sum);
	return 0;
}


