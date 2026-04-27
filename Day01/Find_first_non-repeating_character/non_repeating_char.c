#include <stdio.h>

char	first_non_repeating(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (str[i] != '\0')
	{
		count = 0;
		j = 0;

		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				count++;
			j++;
		}

		if (count == 1)
			return (str[i]);

		i++;
	}

	return ('\0');
}

int	main()
{
	char str[] = "xxyyppll";
	char result;

	result = first_non_repeating(str);

	if (result != '\0')
		printf("first non-repeating: %c\n", result);
	else
		printf("only repeating character\n");

	return (0);
}
