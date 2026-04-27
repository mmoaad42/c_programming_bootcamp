#include <stdio.h>

void	remove_spaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}

int	main()
{
	char str[] = " h e l l o   w o r l d ";

	remove_spaces(str);

	printf("%s\n", str);

	return (0);
}
