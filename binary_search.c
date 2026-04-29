int binary_search(int *arr, int size, int target)
{
    int left;
    int right;
    int mid;

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}
/*#include <stdio.h>

int binary_search(int *arr, int size, int target);

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    printf("%d\n", binary_search(arr, size, 7));
    return 0;
}*/

