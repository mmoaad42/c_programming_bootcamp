#include <stdio.h>

int linear_search(int arr[], int n, int target)
{
    int i = 0;

    while (i < n)
    {
        if (arr[i] == target)
            return i;
        i++;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 25, 30, 5, 60};
    int n = 5;
    int target = 30;
    int result;

    result = linear_search(arr, n, target);

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}
