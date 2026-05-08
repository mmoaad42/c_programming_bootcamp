#include <stdio.h>

int fibonacci(int index)
{
	if (index < 0)
		return -1;
	else if (index == 0)
		return 0;
	else if (index <= 2)
		return 1;
	else
		return fibonacci(index - 2) + fibonacci(index - 1);
}
int	main(void)
{
	printf("The negative fibonacci is %d\n", fibonacci(-5));
	printf("The 0º fibonacci is %d\n", fibonacci(0));
	printf("The 1º fibonacci is %d\n", fibonacci(1));
	printf("The 2º fibonacci is %d\n", fibonacci(2));
	printf("The 3º fibonacci is %d\n", fibonacci(3));
	printf("The 4º fibonacci is %d\n", fibonacci(4));
	printf("The 5º fibonacci is %d\n", fibonacci(5));
	printf("The 6º fibonacci is %d\n", fibonacci(6));
	printf("The 7º fibonacci is %d\n", fibonacci(7));
	printf("The 8º fibonacci is %d\n", fibonacci(8));
	printf("The 9º fibonacci is %d\n", fibonacci(9));
	printf("The 10º fibonacci is %d\n", fibonacci(10));
} 
