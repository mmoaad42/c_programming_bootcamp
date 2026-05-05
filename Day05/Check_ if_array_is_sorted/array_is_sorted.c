#include <stdio.h>

int is_sorted(int arr[], int n)
{
    int i = 0;

    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
            return 0; // not sorted
        i++;
    }
    return 1; // sorted
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if (is_sorted(arr, n))
        printf("Array is sorted\n");
    else
        printf("Array is NOT sorted\n");

    return 0;
}
