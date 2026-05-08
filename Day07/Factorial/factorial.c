#include <stdio.h>

int	factorial(int n)
{
	if (n < 0 )
		return 0;
	else if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	printf("the factorial is %d\n", factorial(5));
	return 0;
}
