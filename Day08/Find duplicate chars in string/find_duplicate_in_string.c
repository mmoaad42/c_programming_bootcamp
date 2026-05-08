#include <stdio.h>

int	is_duplicate(char *str)
{
	int	 count[256] = {0};
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		count[(unsigned char) str[i]]++;
		i++;
	}
	i = 0;
	while (i < 256)
	{
	if (count[i] > 1)
		printf("%c", i);
	i++;
	}
	printf("\n");
	return 0;
}

int main()
{
	char str[] = "miami";
	is_duplicate(str);
	return 0;
}



