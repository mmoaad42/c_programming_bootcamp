#include <stdio.h>

void rotate_right(int arr[], int size, int k)
{
    int i, j, temp;

    k = k % size;

    for (i = 0; i < k; i++)
    {
        temp = arr[size - 1];
        for (j = size - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int k = 1;

    rotate_right(arr, size, k);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
