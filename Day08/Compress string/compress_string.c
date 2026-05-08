#include <stdio.h>

int	compress_string(char *str)
{
	int count = 1;
	int current = str[0] ;
	int i ;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == str[i + 1])
			count++;
		else
		{
			printf("%c%d", str[i], count);
			count = 1;
		}
	i++;
	}
	printf("\n");
return 0;
}

int main()
{
	char str[] = "emma";
	compress_string(str);
	return 0;
}

