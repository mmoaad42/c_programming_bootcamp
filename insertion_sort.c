void insertion_sort(int *arr, int size)
{
    int i;
    int j;
    int key;

    i = 1;
    while (i < size)
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
