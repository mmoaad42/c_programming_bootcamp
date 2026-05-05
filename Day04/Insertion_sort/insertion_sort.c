#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, key, j;

    i = 1;
    while (i < n)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;
    int i = 0;

    insertion_sort(arr, n);

    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
