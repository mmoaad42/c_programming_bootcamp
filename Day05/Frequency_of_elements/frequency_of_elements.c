#include <stdio.h>

void frequency(int arr[], int n)
{
    int visited[100] = {0};
    int i, j, count;

    i = 0;
    while (i < n)
    {
        if (visited[i] == 1)
        {
            i++;
            continue;
        }

        count = 1;
        j = i + 1;

        while (j < n)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
            j++;
        }

        printf("%d appears %d times\n", arr[i], count);
        i++;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = 7;

    frequency(arr, n);

    return 0;
}
