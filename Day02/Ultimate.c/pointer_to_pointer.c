//#include <stdio.h>
//
void	pointer_to_pointer(int ***ptr)
{
	***ptr = 1337;
}


/*int main()
{
int n  = 42;
int *ptr1 = &n;
int **ptr2 = &ptr1;
int ***ptr3 = &ptr2;

printf("before%d\n", n);
pointer_to_pointer(ptr3);
printf("after%d\n", n);
}*/


