int linear_search(int *arr, int size, int goal)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (arr[i] == goal)
            return i;
        i++;
    }
    return -1;
}
#include <stdio.h>

int linear_search(int *arr, int size, int goal);

int main(void)
{
    int arr[] = {10, 5, 8, 3};
    int size = 4;

    printf("%d\n", linear_search(arr, size, 8));
    printf("%d\n", linear_search(arr, size, 7));
    return 0;
}
