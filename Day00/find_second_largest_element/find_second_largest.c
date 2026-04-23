//#include <stdio.h>
int	find_second_largest_element(int *arr, int size)
{
	int	biggest;
	int	snd;
	int	i;

	if (size < 2)
		return 0;
	if (arr[0] < arr[1])
	{
		biggest = arr[1];
		snd = arr[0];
	}
	else
	{
		biggest = arr[0];
		snd = arr[1];
	}

	i = 2;
       while (i < size)
       {
	       if (arr[i] > biggest)
	       {
		       snd = biggest;
		       biggest = arr[i];
	       }
	       else if ( arr[i] > snd && arr[i] != biggest)
		       snd = arr[i];
	       i++;
       }
       return snd;
}
/*int main()
{
	int arr[4] = {3, 5, 1, 7};
	printf(" %d\n", ft_find_second_largest_element(arr,4));
}*/
