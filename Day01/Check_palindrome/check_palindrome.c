#include <stdio.h>

int	is_palindrome(char *str)
{
	int	start;
	int	end;

	start = 0;
	end = 0;

	while (str[end] != '\0')
		end++;
	end--;

	while (start < end)
	{
		while (str[start] == ' ')
			start++;
		while (str[end] == ' ')
			end--;

		if (str[start] != str[end])
			return (0);

		start++;
		end--;
	}
	return (1);
}

int	main()
{
	char str[] = "n u r s e s r u n";

	if (is_palindrome(str))
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");

	return (0);
}
