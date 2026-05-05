#include <stdio.h>

int binary_search(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 9};
    int n = 6;
    int target = 5;
    int result;

    result = binary_search(arr, n, target);

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}
