#include <unistd.h>
#include <stdio.h>

void	longest_word(char *str)
{
	int	len = 0;
	int	max = 0;
	int	start = 0;
	int	max_start = 0;
	int	i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			if (len == 0)
				start = i;
			len++;
		}
		else
		{
			if (len > max)
			{
				max = len;
				max_start = start;
			}
			len = 0;
		}
		i++;
	}
	if (len > max)
	{
		max = len;
		max_start = start;
	}
	i = 0;
	while (i < max)
	{
		write(1, &str[max_start + i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main()
{
	char *test = "moaad is so coooll";

	printf("the sentence is %s\n", test);
	write(1, "longest word: ", 14);
	longest_word(test);
}
