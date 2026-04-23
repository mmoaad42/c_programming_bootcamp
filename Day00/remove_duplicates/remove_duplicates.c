int remove_duplicates(int *arr, int size)
{
    int i;
    int j;
    int k;
    int duplicate;

    i = 0;
    k = 0;

    while (i < size)
    {
        duplicate = 0;
        j = 0;

        while (j < i)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
            j++;
        }

        if (duplicate == 0)
        {
            arr[k] = arr[i];
            k++;
        }
        i++;
    }
    return k;
}

