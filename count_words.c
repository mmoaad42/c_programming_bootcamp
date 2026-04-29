#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		// skip spaces
		while (str[i] == ' ')
			i++;

		// if we found a word
		if (str[i] != ' ' && str[i] != '\0')
		{
			count++;

			// skip the whole word
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

int	main()
{
	char str[] = "  adventure time is one of my favorite show  ";
	int result;

	result = count_words(str);
	printf("Words: %d\n", result);

	return (0);
}
