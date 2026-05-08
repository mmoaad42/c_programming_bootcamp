#include <stdio.h>
void reverse_str( char *start, char *end)
{
	char temp;
	if (start >= end)
		return;
	temp = *start;
	*start = *end ;
	*end = temp;
	reverse_str(start + 1, end - 1);
}
int main()
{
	char str[] = "mia";
	printf("str before:  %s\n", str);
	reverse_str(str, str + 2);
	printf("str after:  %s\n", str);
	return 0;
}
