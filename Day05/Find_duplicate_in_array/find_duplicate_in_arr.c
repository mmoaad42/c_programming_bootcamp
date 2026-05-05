#include <stdio.h>

void find_duplicates(int arr[], int n)
{
    int i, j;

    i = 0;
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate found: %d\n", arr[i]);
                break;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int n = 7;

    find_duplicates(arr, n);

    return 0;
}
