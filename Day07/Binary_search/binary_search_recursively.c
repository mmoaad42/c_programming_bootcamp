#include <stdio.h>

int binary_search(int arr[], int low, int high, int target)
{
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return binary_search(arr, low, mid - 1, target);
    else
        return binary_search(arr, mid + 1, high, target);
}

int main(void)
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;
    int target = 8;
    int result;

    result = binary_search(arr, 0, size - 1, target);

    if (result == -1)
        printf("Not found\n");
    else
        printf("Found at index: %d\n", result);

    return 0;
}
